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
      if (st.empty() || x>0)
      {
        st.push(x);
        continue;
      }
      else
      {
        while(!st.empty() && st.top()>0 && st.top()<abs(x))
          st.pop();
        if(st.empty() || st.top()<0)
          st.push(x);
        else if(st.top() == abs(x))
        {
            st.pop();
        }
      }
      
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