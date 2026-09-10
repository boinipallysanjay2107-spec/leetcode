class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int ans=(n*(n+1))/2; 
       int sum=0;
       for(int val:nums){
        sum=sum+val;
       }
       return ans-sum;
    }
};