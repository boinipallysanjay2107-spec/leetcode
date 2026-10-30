class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int val:nums1){
            m[val]=1;
        }
        for(int val:nums2){
            if(m[val]==1){
                m[val]=0;
                ans.push_back(val);
            }
        }
        return ans;
    }
};