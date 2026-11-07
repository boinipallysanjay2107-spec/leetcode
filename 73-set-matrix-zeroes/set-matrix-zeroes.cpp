class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       /* vector<vector<int>> d=matrix;
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
        matrix=d; */
        unordered_set<int> s1;
        unordered_set<int> s2;
      for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
       }
       for(int val:s1){
        for(int j=0;j<matrix[0].size();j++){
            matrix[val][j]=0;
        }
       }
         for(int val:s2){
        for(int j=0;j<matrix.size();j++){
            matrix[j][val]=0;
        }
       }
        

    }
};