class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
     vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size()));
     for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
             int sum=0;
             for(int s=i-k;s<=i+k;s++){
                for(int r=j-k;r<=j+k;r++){
                    if(s>=0&&s<mat.size()&&r>=0&&r<mat[0].size()){
                        sum=sum+mat[s][r];
                    }
                }
             }
             ans[i][j]=sum;
        }
     }
     return ans;
    }
};