class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        if(target<nums[i])
        return 0;
        if(target>nums[j])
        return nums.size();
        int mid=0;
        while(i<=j){
            mid=(j-i)/2+i;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            i=mid+1;
            else
            j=mid-1;
        }
        return i;
    }
};