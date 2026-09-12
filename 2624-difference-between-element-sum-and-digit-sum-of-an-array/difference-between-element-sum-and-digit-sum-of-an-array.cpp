class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0;
        for(int val:nums){
            es=es+val;
        }
        int ds=0;
        int d=0;
        for(int val:nums){
            while(val>0){
                d=val%10;
                val=val/10;
                ds=ds+d;
            }
        }
        return abs(es-ds);
    }
};