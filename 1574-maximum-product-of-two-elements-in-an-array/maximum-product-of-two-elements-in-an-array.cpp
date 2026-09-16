class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int Max=0;
        int long long ans=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
               if(nums[i]*nums[j]>Max){
                   ans=(nums[i]-1)*(nums[j]-1);
                   Max=nums[i]*nums[j];
               }
            }
        }
        return ans;
    }
};