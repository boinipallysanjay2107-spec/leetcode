class Solution {
public:
    int majorityElement(vector<int>& nums) {
             unordered_map<int,int> m;
        int ans;
        for(int val:nums){
            m[val]++;
        }
        for(auto val:m){
            if(val.second>nums.size()/2){
                ans=val.first;
            }
        }
        return ans;

    }
};