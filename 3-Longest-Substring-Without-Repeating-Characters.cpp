class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans=0;
        int n=s.size();
        map<char,int>mp;
        int l=0,r=0;
        while(r<n)
        {
            if(mp[s[r]]!=0)
            {
                
                if(mp[s[r]]>=l)
                {
                    l=mp[s[r]];;
                }
            }
            ans=max(ans,r-l+1);
            mp[s[r]]=r+1;
            r++;
        }
        return ans;
    }
};