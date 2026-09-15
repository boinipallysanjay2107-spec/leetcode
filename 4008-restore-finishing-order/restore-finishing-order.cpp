class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for(int val:order){
           for(int val2:friends){
            if(val==val2)
            ans.push_back(val);
           }
        }
        return ans;
    }
};