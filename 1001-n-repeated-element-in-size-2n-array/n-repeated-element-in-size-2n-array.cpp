class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()/2+1;i++){
            for(int j=i+1;j<nums.size()/2+2;j++){
                if(nums[i]==nums[j]){
                  return nums[i];
                }
            }
        }
        return 0;
    }
};