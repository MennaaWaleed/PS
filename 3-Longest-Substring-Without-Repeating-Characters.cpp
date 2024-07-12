class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;++i)
        {
            map<char,int>hash;
            for(int j=i;j<n;++j)
            {
                if(hash[s[j]]==1)break;
                ans=max(ans,j-i+1);
                hash[s[j]]=1;
            }
        }
        return ans;
    }
};