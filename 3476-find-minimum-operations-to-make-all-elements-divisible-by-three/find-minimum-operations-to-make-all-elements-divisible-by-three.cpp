class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        int count=0;
        int val2=0;
        int count1=0;
        int count2=0;
        for(int val:nums){
            count=0;
            count1=0;
            count2=0;
            if(val%3==0){
                ans=ans+0;
            }
            else{
                val2=val;
                while(val%3!=0){
                    val++;
                    count1++;
                }
                while(val2%3!=0){
                    val2--;
                    count2++;
                }
             count=min(count1,count2);
             ans=ans+count;
            }
        }
       return ans;
    }
};