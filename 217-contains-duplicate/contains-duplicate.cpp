class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int> m;
        for(int val:nums){
            if(m[val]==1){
                return 1;
            }
            m[val]++;
        }
        return 0;
    
    }
};