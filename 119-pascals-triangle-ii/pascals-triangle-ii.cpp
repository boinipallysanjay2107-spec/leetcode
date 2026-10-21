class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long val=0;
        vector<int> ans;
        for(int i=0;i<=rowIndex;i++){
             val=1;
            for(int j=0;j<=i;j++){
                if(i==rowIndex){
                   ans.push_back(val);
                }
                val=val*(i-j)/(j+1);
            }
        }
       return ans;
    }
};