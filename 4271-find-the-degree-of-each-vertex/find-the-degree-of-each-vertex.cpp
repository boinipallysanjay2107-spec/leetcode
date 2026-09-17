class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<matrix.size();i++){
            sum=0;
            for(int j=0;j<matrix.size();j++){
                sum=sum+matrix[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};