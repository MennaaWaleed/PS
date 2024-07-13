class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n=nums.size();
       vector<int>ans(n,-1);
       int p1=0,p2=n-1;
       for(auto &i:nums)
       {
        if(i==0)
        {
            ans[p1]=0;
            p1++;
        }
        else if(i==2)
        {
            ans[p2]=2;
            p2--;
        }
       }
       for(auto &i:ans)
       {
        if(i==-1)
        {
            i=1;
        }
       }
       nums=ans;
       
    }
};