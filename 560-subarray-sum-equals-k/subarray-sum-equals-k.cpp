class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      /*  int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count; */
        if(nums.size()==1&&k==nums[0]) return 1;
        if(nums.size()==1&&k!=nums[0]) return 0;
        vector<int> ps(nums.size());
        ps[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ps[i]=ps[i-1]+nums[i];
        }
        unordered_map<int,int> m;
        
        int count=0;
        for(int j=0;j<ps.size();j++){
            if(ps[j]==k) count++;
            if(m.contains(ps[j]-k))
            count=count+m[ps[j]-k];
            m[ps[j]]++;
        }
        return count;

    }
};