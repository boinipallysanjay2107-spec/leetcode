class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int index=0;
        int i=0;
        int l=matrix.size()-1;
        while(i<=l){
            int m=(i+l)/2;
            if(matrix[m][0]<=target&&matrix[m][matrix[0].size()-1]>=target){
                index=m;
                break;
            }
            else if(matrix[m][matrix[0].size()-1]<target){
                i=m+1;
            }
            else{
                l=m-1;
            }
        }
        int j=0;
        int k=matrix[0].size()-1;
        while(j<=k){
            int mid=(j+k)/2;
            if(matrix[index][mid]==target){
                return 1;
            }
            else if(matrix[index][mid]<target){
                j=mid+1;
            }
            else k=mid-1;
        }
        return 0;
    }
};