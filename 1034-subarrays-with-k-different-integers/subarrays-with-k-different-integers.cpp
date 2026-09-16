class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       /* unordered_map<int,int> m;
        int count=0;
        for(int i=0;i<nums.size();i++){
              m.clear();
            for(int j=i;j<nums.size();j++){
                m[nums[j]]++;
                if(m.size()==k){
                    count++;
                }
                else if(m.size()>k)
                break;
            }
        }
        return count; */
        unordered_map<int,int> m;
        int count=0;
        int r=0;
        int l=0;
        for( r=0;r<nums.size();r++){
            m[nums[r]]++;
            while(m.size()>k){
                m[nums[l]]--;
                if(m[nums[l]]==0) m.erase(nums[l]);
                l++;
            }
             count=count+r-l+1;
        }
        
        unordered_map<int,int> m1;
        int count1=0;
        int r1=0;
        int l1=0;
        for( r1=0;r1<nums.size();r1++){
            m1[nums[r1]]++;
            while(m1.size()>k-1){
                m1[nums[l1]]--;
                if(m1[nums[l1]]==0) m1.erase(nums[l1]);
                l1++;
            }
             count1=count1+r1-l1+1;
        }
        return count-count1;
    }
};