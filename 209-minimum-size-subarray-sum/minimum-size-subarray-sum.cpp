class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       /* int sum=0;
        int mi=INT_MAX;
        int flag=0;
     for(int i=0;i<nums.size();i++){
        sum=0;
        for(int j=i;j<nums.size();j++){
              sum=sum+nums[j];
              if(sum>=target){
             mi=min(mi,j-i+1);
             flag=1;
             break;
              }
        }
     }  
     if(flag==1)
     return mi; 
     return 0; */
     int l=0;
     int r=0;
     int flag=0;
     int sum=0;
     int mi=INT_MAX;
     for(r=0;r<nums.size();r++){
        sum=sum+nums[r];
            while(sum>=target){
            mi=min(mi,r-l+1);
            sum=sum-nums[l];
            l++;
            flag=1;
        }
     }
if(flag==1)
     return mi; 
     return 0;


    }
};