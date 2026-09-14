class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int count=0;
        int ma=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            count++;
                while(count>k){
                    if(nums[l]==0)
                    count--;
                    l++;
                }
            r++;
           ma=max(ma,r-l);
        }
        return ma;
    }
};