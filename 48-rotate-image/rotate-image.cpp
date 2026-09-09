class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       /* vector<vector<int>> a=matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                matrix[i][j]=a[matrix.size()-j-1][i];
            }
        }*/
                for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){
                if(i!=j)
                swap(matrix[i][j],matrix[j][i]);
            }
        }
         for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
         }
    }
};