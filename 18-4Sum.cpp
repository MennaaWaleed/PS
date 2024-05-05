class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        map<vector<int>,bool>mp;
        sort (nums.begin(),nums.end());
        int sz=nums.size();
        for(int a=0;a<sz;++a)
        {
            for(int b=a+1;b<sz;++b)
            {
                int c=b+1;
                int d=sz-1;
                while(c<d)
                {
                    long long sum=(long long)nums[a]+(long long)nums[b]+(long long)nums[c]+(long long)nums[d];
                    if(sum==target)
                    {
                        vector<int>v={nums[a],nums[b],nums[c],nums[d]};
                        if(!mp[v]){
                        ans.push_back(v);
                        mp[v]=true;
                        }
                        c++;
                        d--;
                    }
                    else if(sum>target)
                    {
                        d--;
                    }
                    else
                    {
                        c++;
                    }
                }
            }
        }
        return ans;
    }
};