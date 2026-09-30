class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<=i;j++){
                ans[i]=ans[i]+nums[j];
            }
        }
        return ans;
    }
};