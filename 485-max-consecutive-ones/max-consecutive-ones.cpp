class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       /* int sum=0;
        int mi=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==1){
            sum++;
          }
          else{
            mi=max(mi,sum);
            sum=0;
          }
        }
        return max(mi,sum); */
        int count=1;
        int n=nums.size();
    int ma=0;
    if(n==1&&nums[0]==1){
return 1;
    }
    int flag=0;
    for(int i=0;i<n;i++){
    if(nums[i]==1)
    flag=1;
    }
    if(flag==0){
             return 0;
    }

    for(int i=0;i<n-1;i++){
        if(nums[i]==1&&nums[i+1]==1){
            count++;
            ma=max(ma,count);
        }
        else{
            count=1;
        }
    }
    return max(count,ma);
    }
};