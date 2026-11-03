class Solution {
public:
    int minMoves(vector<int>& nums) {
        int big=*(max_element(nums.begin(),nums.end()));
        int ans=0;
        for(int val:nums){
            ans=ans+(big-val);
        }
        return ans;
    }
};