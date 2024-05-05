class Solution {
public: 
    static const int N = 5*1e6+6;
    static bool is_Prime[N];
    
    void sieve()
    {
        fill(is_Prime, is_Prime + N, true);
        is_Prime[0] = is_Prime[1] = false;
        
        for(int i = 2; i * i < N; i++)
        {
            if(is_Prime[i])
            {
                for(int m = i * 2; m < N; m += i)
                {
                    is_Prime[m] = false;
                }
            }
        }
    }
    
    int countPrimes(int n) {
        sieve();
        int cnt = 0;
        for(int i = 0; i < n; ++i)
        {
            if(is_Prime[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};

bool Solution::is_Prime[N];
