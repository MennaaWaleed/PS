class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int>s1Freq(26,0),s2Freq(26,0);
       for(int i=0;i<s1.size();++i)
       {
        s1Freq[s1[i]-'a']++;
       }
       int l=0,r=0;
       while(r<s2.size())
       {
        s2Freq[s2[r]-'a']++;
        if(r-l+1==s1.size())
        {
            if(s1Freq==s2Freq)
            {
            return true;
            }
             s2Freq[s2[l]-'a']--;
            l++;
        }
        r++;

       }
       return false;
    }
};