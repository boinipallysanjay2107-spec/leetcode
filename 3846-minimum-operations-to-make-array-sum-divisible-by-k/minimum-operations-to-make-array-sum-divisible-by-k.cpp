class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         int long long sum=0;
            for(int j=0;j<nums.size();j++)
                  sum=sum+nums[j];
        
        return sum%k;
    }
};