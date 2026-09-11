class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
       for(int val:nums){
        while(val>0){
            if(val%10==digit)
            c++;
            val=val/10;
        }
       } 
       return c;
    }
};