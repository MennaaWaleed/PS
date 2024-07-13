class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>p;
        vector<int>ans;
        for(int i=0;i<nums.size();++i)
        {
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
        int p1=0,p2=nums.size()-1;
        while(p1<p2)
        {
            if(p[p1].first+p[p2].first==target)
            {
                ans.push_back(p[p1].second);
                ans.push_back(p[p2].second);
                break;
            }
            if(p[p1].first+p[p2].first>target) p2--;
            else p1++;
        }
        return ans;
    }
};