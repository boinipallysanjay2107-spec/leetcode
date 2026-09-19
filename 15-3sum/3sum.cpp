class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> re;
           sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){

                if(nums[i]+nums[j]+nums[k]==0){
                    re.push_back(nums[i]);
                    re.push_back(nums[j]);
                    re.push_back(nums[k]); 
                    res.push_back(re);
                    while(j<k&&nums[j]==nums[j+1]) j++;
                    while(k>j&&nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                   re.erase(re.begin(),re.end());
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else k--;
            }
            
    }
        return res;
    }
};