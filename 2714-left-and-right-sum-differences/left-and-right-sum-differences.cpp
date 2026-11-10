class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int ls=0;
        int rs=0;
        int sum=0;
        for(int val:nums) sum=sum+val;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            rs=rs+nums[i];
            ans[i]=abs(ls-(sum-rs));
            ls=ls+nums[i];
        }
        return ans;
    }
};