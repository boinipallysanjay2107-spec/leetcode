class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int val:nums){
            int count=0;
            while(val>0){
                count++;
                val=val/10;
            }
            if(count%2==0) even++;
        }
        return even;
    }
};