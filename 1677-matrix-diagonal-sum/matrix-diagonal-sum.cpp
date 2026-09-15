class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    if(j!=mat.size()-j-1)
                    sum=sum+mat[i][j]+mat[i][mat.size()-j-1];
                    else{
                        sum=sum+mat[i][j];
                    }
                }
            }
        }
        return sum;
    }
};