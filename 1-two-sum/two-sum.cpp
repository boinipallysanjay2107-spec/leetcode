class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> m;
       vector<int> ans;
       int comp=0;
       for(int i=0;i<nums.size();i++){
           if(m.find(target-nums[i])!=m.end()){
             ans.push_back(i);
             ans.push_back(m[target-nums[i]]);
             break;
           }
           else{
            m[nums[i]]=i;
           }
       }
       return ans;
       
    }

};