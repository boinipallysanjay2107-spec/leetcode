class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        vector<int> ans;
        ans.push_back(-999);
        for(int i=0;i<nums.size();i++){
            if(ans[j]!=nums[i]){
            ans.push_back(nums[i]);
            j++;
            }
        }
        nums.clear();
        int count=0;
        for(int i=1;i<ans.size();i++){
        nums.push_back(ans[i]);
        count++;
        }
        return count;
   
    }
};