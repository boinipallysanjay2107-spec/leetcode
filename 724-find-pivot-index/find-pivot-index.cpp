class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ls=0;
            for(int j=0;j<i;j++){
                ls=ls+nums[j];
            }
            int rs=0;
            for(int j=i+1;j<nums.size();j++){
                rs=rs+nums[j];
            }
            if(ls==rs) return i;
        }
        return -1;

    }
};