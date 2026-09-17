class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for(int val:nums){
            ans.push_back(val);
        }
        reverse(nums.begin(),nums.end());
        for(int val:nums){
            ans.push_back(val);
        }
        return ans;
    }
};