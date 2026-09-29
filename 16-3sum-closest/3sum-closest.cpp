class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int dif;
        int mi=INT_MAX;
        int ans=0;
      for(int i=0;i<nums.size()-2;i++) {
        if(i>0&&nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            dif=abs(sum-target);
            mi=min(mi,dif);
            if(mi==dif) ans=sum;
            if(sum==target) return target;
            if(sum>target) k--;
            else j++;

        }    
      } 
      return ans;
    }
};