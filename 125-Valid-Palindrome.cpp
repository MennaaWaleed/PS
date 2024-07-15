class Solution {
public:
    bool isPalindrome(string s) {
        string m;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]==' ')continue;
            char c=s[i];
            if(c>='A'&&c<='Z')
            {
                char ch=tolower(c);
                m.push_back(ch);
            }
            else if(c>='a'&&c<='z')
            m.push_back(c);
            else if(c>='0'&&c<='9')
            m.push_back(c);
        }
        int l=0;int r=m.size()-1;
        while(l<=r)
        {
            if(m[l]!=m[r]) return false;
            l++;r--;
        }
        return true;
    }
};