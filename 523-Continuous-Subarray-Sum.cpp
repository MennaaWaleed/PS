class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n,0);
        map<int,int>mp;
        mp[0]=-1;
        pre[0]=nums[0];
        for(int i=1;i<n;++i)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=0;i<n;++i)
        {
            if(mp.find(pre[i]%k) != mp.end())
            {
                if(i-mp[pre[i]%k]>=2) return true;
            }
            else
            mp[pre[i]%k]=i;
        }
        return false;

    }
};