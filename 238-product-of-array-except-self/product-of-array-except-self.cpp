class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       /* vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
               prod=prod*nums[j];
                }
            }
            ans.push_back(prod);
        }
        return ans; */
        vector<int> r(nums.size(),1);
        vector<int> l(nums.size(),1);
        r[0]=1;
        for(int i=1;i<nums.size();i++){
            r[i]=r[i-1]*nums[i-1];
        }
        l[0]=1;
        for(int i=nums.size()-2;i>=0;i--){
            l[i]=l[i+1]*nums[i+1];
        }
        vector<int> ans(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            ans[i]=r[i]*l[i];
        }
        return ans;
    }
};