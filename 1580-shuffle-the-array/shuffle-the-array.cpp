class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0;i<nums.size();i++){
            if(i<n)
            arr1.push_back(nums[i]);
            else{
                arr2.push_back(nums[i]);
            }
        }
        vector<int> ans(2*n);
        int s=0;
        int r=0;
        for(int i=0;i<2*n;i++){
            if(i%2==0)
           ans[i]=arr1[s++];
           else ans[i]=arr2[r++];
        }

        return ans;
    }
};