class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
     /*   int long long Max=0;
        int long long sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            sum=0;
            if(i+k<=nums.size()){
           for(int j=i;j<i+k;j++){
                m[nums[j]]++;
            }
            for(int j=i;j<i+k;j++){
                if(m[nums[j]]==1){
                sum=sum+nums[j];
                }
                else{
                    sum=0;
                    break;
                }
            }
            Max=max(Max,sum);
            m.clear();
            }
        }
        return Max;
        */
        int i=0,j=0;
        int long long Max=0;
        int long long sum=0;
        unordered_set<int> s;
        for(j=0;j<nums.size();j++){
             while(s.count(nums[j])||j-i+1>k){
                s.erase(nums[i]);
                 sum=sum-nums[i];
                i++;
             }
                sum=sum+nums[j];
               s.insert(nums[j]);
           
             if(j-i+1==k){
                Max=max(Max,sum);
             }
        }
        return Max;
    }
};