class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i=0;
        int j=nums.size()-1;
        vector<int> ans;
        for(int val:nums){
            if(val<pivot)
            ans.push_back(val);
        }
        for(int val:nums){
            if(val==pivot)
            ans.push_back(val);
        }
        for(int val:nums){
            if(val>pivot)
            ans.push_back(val);
        }

        return ans;
    }
};