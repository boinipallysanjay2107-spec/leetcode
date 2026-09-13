class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int val:nums){
            if(val<k){
             count++;
            }
        }
        return count;
    }
};