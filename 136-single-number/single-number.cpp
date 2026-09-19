class Solution {
public:
    int singleNumber(vector<int>& nums) {
      /*  sort(nums.begin(),nums.end());
        int ele=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(n==1)
            ele=nums[0];
            else if(i==0&&nums[i]!=nums[i+1])
            ele=nums[i];
            else if(i==(n-1)&&nums[i]!=nums[i-1])
            ele=nums[i];
            else if(i>0&&i<(n-1)&&nums[i]!=nums[i-1]&&nums[i]!=nums[i+1])
            ele=nums[i];
        }
       return ele;*/
       int ans=0;
       for(int val:nums){
          ans=ans^val;
       }
       return ans;



    }
};