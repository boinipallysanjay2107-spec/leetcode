class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr(nums.size());
        for(int i=0;i<nums.size()-1;i=i+2){
            arr[i+1]=(nums[i]);
            arr[i]=(nums[i+1]);
        }
        return arr;
    }
};