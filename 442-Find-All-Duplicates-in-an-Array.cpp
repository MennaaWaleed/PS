class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>ans;
       vector<int>f(mx+1.0);
        for(auto &i : nums)
        {
            if(!f[i])
            {
                f[i]=1;
            }
            else
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};