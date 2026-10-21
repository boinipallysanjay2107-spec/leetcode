class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /* vector<int> dube;
        dube=nums;
        vector<int> v;
        sort(nums.begin(),nums.end());
       int i=0;
       int j=nums.size()-1;
       int s=0;
       int r=0;
       while(i<j){
       if(nums[i]+nums[j]==target){
        s=i;
        r=j;
        break;
       } 
       if(nums[i]+nums[j]<target){
        i++;
       }
       else j--;
       }
       for(int z=0;z<nums.size();z++){
           if(dube[z]==nums[s]){
            v.push_back(z);
           }
           else if(dube[z]==nums[r]){
            v.push_back(z);
           }
       }
       
       return v;*/
       unordered_map<int,int> m;
       vector<int> ans;
       int comp=0;
       for(int i=0;i<nums.size();i++){
           if(m.find(target-nums[i])!=m.end()){
             ans.push_back(i);
             ans.push_back(m[target-nums[i]]);
           }
           else{
            m[nums[i]]=i;
           }
       }
       return ans;
       
    }

};