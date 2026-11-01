class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       /* for(int i=0;i<nums.size();i++){
            int ls=0;
            for(int j=0;j<i;j++){
                ls=ls+nums[j];
            }
            int rs=0;
            for(int j=i+1;j<nums.size();j++){
                rs=rs+nums[j];
            }
            if(ls==rs) return i;
        }
        return -1; */
        vector<int> ps(nums.size());
        vector<int> ss(nums.size());
        ps[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ps[i]=ps[i-1]+nums[i];
        }
        ss[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            ss[i]=ss[i+1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(ps[i]==ss[i]) 
            return i;
        }
        
         return -1;

    }
};