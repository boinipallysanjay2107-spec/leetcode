class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int val:nums){
            m[val]++;
        }
        if(m[nums[nums.size()/2]]==1) return 1;
        else return 0;
    }
};