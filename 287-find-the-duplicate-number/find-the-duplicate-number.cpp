class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int val:nums){
            if(m[val]>0) return val;
            m[val]++;
        }
        return 0;
    }
};