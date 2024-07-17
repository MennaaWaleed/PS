class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans;
        int p1=0,p2=0;
        for(int i=0;i<max(w1.size(),w2.size());++i)
        {
            if(p1<w1.size())ans.push_back(w1[p1]),p1++;
            if(p2<w2.size())ans.push_back(w2[p2]),p2++;

        }
        return ans;
    }
};