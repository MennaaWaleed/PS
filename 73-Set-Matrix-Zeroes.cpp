class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,bool>row,col;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
         for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(row[i]||col[j])
                matrix[i][j]=0;
        }}
    }
};