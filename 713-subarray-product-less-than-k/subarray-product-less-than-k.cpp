class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       /*  int long long prod=1;
        int count=0;
        if(k<=1){
            return 0;
        }
        else{
            for(int i=0;i<nums.size();i++){
                prod=1;
                for(int j=i;j<nums.size();j++){
                     prod=prod*nums[j];
                     if(prod<k) count++;
                     else{
                        break;
                     }
                }
            }
            return count;
        } 
        */
        int r=0;
        int l=0;
        int long long prod=1;
        int c=0;
        if(k<=1) return 0;
        for( r=0;r<nums.size();r++){
            prod=prod*nums[r];
                while(prod>=k){
                    prod=prod/nums[l];
                    l++;
                }
                if(prod<k)
                c=c+r-l+1;
        }
        return c;
        
    }
};