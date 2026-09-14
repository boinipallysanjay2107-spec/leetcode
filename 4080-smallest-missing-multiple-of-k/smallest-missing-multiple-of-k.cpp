class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int flag=0;
        int i=0;
        int j=1;
        int k1=k;
        while(1){
             i=0;
             for(int val:nums){
                if(k1==val){
                  i=1;
                }
             }
             if(i==0){
                return k1;
             }
             else{
                k1=k*j;
                j=j+1;
             }
        }
    }
};