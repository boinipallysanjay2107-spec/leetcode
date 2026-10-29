class Solution {
public:
    int majorityElement(vector<int>& nums) {
      /*  unordered_map<int,int> m;
        int ans;
        for(int val:nums){
            m[val]++;
        }
        for(auto val:m){
            if(val.second>nums.size()/2){
                ans=val.first;
                 return ans;
            }
        }
       return 0; */
       int freq=0;
       int ans=0;
       for(int val:nums){
        if(freq==0) ans=val;
         if(ans==val) freq++;
        else freq--;
       }
       return ans;
    }
};