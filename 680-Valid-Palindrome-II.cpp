class Solution {
public:
    bool valid(string s,int l,int r)
    {
        while(l<=r)
        {
            if(s[l]!=s[r]) return false;
            l++,r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                if(valid(s,l,r-1)) return true;
                else return valid (s,l+1,r);
            }
            else {
                l++,r--;
            }
        }
        return true;
    }
};