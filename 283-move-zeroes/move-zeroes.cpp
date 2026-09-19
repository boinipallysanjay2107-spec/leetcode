class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       /* vector<int> nums2;
        for(int val:nums){
            if(val!=0){
                nums2.push_back(val);
            }
        }
        int zero=nums.size()-nums2.size();
        for(int i=0;i<zero;i++){
            nums2.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=nums2[i];
        }
        for(int val:nums)
        cout<<val<<' '; */
        int i=0;
        int j=0;
        for(j=0;j<nums.size();j++){
            if(nums[i]==0&&nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
            if(nums[i]!=0){
                i++;
            }
        }
        





    }
};