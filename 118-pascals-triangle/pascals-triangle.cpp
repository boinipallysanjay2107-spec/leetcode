class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> d;
        for(int i=0;i<numRows;i++){
            long long val=1;
            d.clear();
            for(int j=0;j<=i;j++){
               d.push_back(val);
               val=val*(i-j)/(j+1);
            }
            ans.push_back(d);
        }
        return ans;
    }
};