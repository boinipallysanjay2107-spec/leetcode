class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<int> d;
        vector<vector<int>> ans;
        int Max=0;
        for(int i=0;i<grid.size();i++){
            d.clear();
            for(int j=0;j<grid[0].size();j++){
                if(i+2<grid.size()&&j+2<grid[0].size()){
                    Max=max({grid[i][j],grid[i+1][j],grid[i+2][j],grid[i][j+1],grid[i][j+2],grid[i+1][j+1],grid[i+1][j+2],grid[i+2][j+1],grid[i+2][j+2]});   
                    d.push_back(Max);
                }
                
            }
            if(!d.empty()) ans.push_back(d);
        }
        return ans;
    }
};