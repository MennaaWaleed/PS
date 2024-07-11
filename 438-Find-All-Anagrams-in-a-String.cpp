class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int>ans;
        if(p.size()>s.size())
        return ans;
        int p1=0,p2=p.size()-1;
        vector<int>mp1(27,0),mp2(27,0);
        for(int i=0;i<p.size();++i)
          {
            mp1[p[i]-'a']++;
            mp2[s[i]-'a']++;
          }
          while(p2<s.size())
          {
            if(mp1==mp2)
            ans.push_back(p1);
            mp2[s[p1]-'a']--;
            p1++;
            p2++;
            if (p2 < s.size())
            mp2[s[p2]-'a']++;
          }
          return ans;
        
    }
};