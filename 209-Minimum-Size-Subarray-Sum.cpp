class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>prefix(n+1,0);
        for(int i=1;i<=n;++i)
        {
            prefix[i]=prefix[i-1]+nums[i-1];
        }
        int l=0,r=0;
        int ans=INT_MAX;
        int sum=0;
        while(r<n)
        {
         sum+=nums[r];
         if(sum>=target)
         {
            ans=min(ans,r-l+1);
            while(sum>=target)
            {
                ans=min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
         }
         r++;
        }
        return ((ans==INT_MAX? 0 : ans));
    }
};