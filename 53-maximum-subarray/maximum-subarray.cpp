class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      /*  int long long  sum=0;
        int long long ma=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                ma=max(ma,sum);
            }
        }
        if(nums.size()==1){
            return nums[0];
        }
        return ma;
        */
        int sum=0;
        int ma=INT_MIN;
       for(int i=0;i<nums.size();i++){
           sum=sum+nums[i];
           ma=max(ma,sum);
           if(sum<0){
            sum=0;
           }
       }
      return ma;
    }
};