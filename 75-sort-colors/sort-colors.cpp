class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1=0;
        int c2=0;
        int c3=0;
        for(int val:nums){
            if(val==0)
            c1++;
            else if(val==1)
            c2++;
            else
            c3++;
        }
        int k=0;
        for(int i=0;i<c1;i++){
        nums[k++]=0;
        }
        for(int i=0;i<c2;i++){
        nums[k++]=1;
        }
        for(int i=0;i<c3;i++){
        nums[k++]=2;
        }
        for(int val:nums){
            cout<<val<<' ';
        }
    }
};