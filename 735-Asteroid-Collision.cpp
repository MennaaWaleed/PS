class Solution
{
public:
  vector<int> asteroidCollision(vector<int> &asteroids)
  {
    int n = asteroids.size();
    stack<int> st;
    for (int i = 0; i < n; ++i)
    {
      int x = asteroids[i];
      bool flag=1;
      while(!st.empty() && st.top()>0 && x<0)
      {
        if(st.top()>abs(x))
        {
            flag=0;
            break;
            
        }
        else if(st.top()<abs(x))
        {
            st.pop();
        }
        else
        {
            st.pop();
            flag=0;
            break;
        }
      }
      if(flag)
        st.push(x);
      
    }
    vector<int> ans;
    while (!st.empty())
    {
      ans.push_back(st.top());
      st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};