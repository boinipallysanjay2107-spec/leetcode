class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> d=matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    for(int s=0;s<matrix.size();s++){
                        d[s][j]=0;
                    }
                   for(int s=0;s<matrix[0].size();s++){
                        d[i][s]=0;
                    } 
                }
            }
        }
        matrix=d;
    }
};