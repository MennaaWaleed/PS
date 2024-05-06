class Solution {
public:
    bool isPrime(int n)
{
    if(n==1 || n==0) 
    return false;
    for (int i=2;i*i<=n;++i)
    {
        if(n%i==0)
           return false;
    }
    return true;
}
    bool isPalindrome(int n)
    {
        string s=to_string(n);
        string rev=s;
        reverse (rev.begin(),rev.end());
        if(s==rev)
        return true;
        else
        return false;
    }
    int primePalindrome(int n) {
        if(n==1 || n==2)
        {
            return 2;
        }
        if(isPrime(n) && isPalindrome(n))
        {
            return n;
        }
        int ans;
       while(true)
       {
          if(isPrime(n) && isPalindrome(n))
          {
          ans=n;
          break;
          }
          n++;
          if(10000000<n && n<100000000)
                n = 100000000;
       }
        return ans;
    }        
};