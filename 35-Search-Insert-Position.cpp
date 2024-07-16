class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mid;
        int ans;
        if(nums[0]>target) ans=0;
        else if(target>nums[n-1]) ans=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) r=mid-1;
            else if(nums[mid]<target) l=mid+1;
            if(mid>0&& nums[mid]>target && nums[mid-1]<target) ans=mid;
        }
        return ans;
    }
};