class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      /*  int sum=0;
        int m=nums.size();
        int Max=0;
          for(int j=0;j<m;j++){
            sum=0;
              for(int i=j;i<m;i++){
                    sum=sum+nums[i];
                if((i-j+1)%2==0&&sum==(i-j+1)/2){
                    Max=max(Max,i-j+1);
                }
            }
        }
        return Max;  */
                vector<int> pr(nums.size());
          for(int i=0;i<nums.size();i++){
           if(nums[i]==0) nums[i]=-1;
          }
          pr[0]=nums[0];
          for(int i=1;i<nums.size();i++){
            pr[i]=pr[i-1]+nums[i];
          }
          unordered_map<int,int> m;
          int Max=0;
          for(int i=0;i<pr.size();i++){
            if(m.count(pr[i])==0) 
            m[pr[i]]=i;
            if(pr[i]==0) Max=max(Max,i+1);
            else{
                Max=max(Max,i-m[pr[i]]);
            }
          }
      return Max;

        
    }
};