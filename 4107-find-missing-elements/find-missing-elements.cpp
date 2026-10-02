class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int Max=*max_element(nums.begin(),nums.end());
        int Min=*min_element(nums.begin(),nums.end());
        vector<int> hash(Max+1);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=1;
        }
        vector<int> v;
        for(int i=Min;i<=Max;i++){
            if(hash[i]!=1){
               v.push_back(i);
            }
        }
        return v;
    }
};