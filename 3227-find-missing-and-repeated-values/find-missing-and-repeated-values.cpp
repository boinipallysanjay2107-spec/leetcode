class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                m[grid[i][j]]++;
            }
        }
        for(auto mp:m){
            if(mp.second>1) ans.push_back(mp.first);
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(!m.contains(i)) ans.push_back(i);
        }
        return ans;
    }
};