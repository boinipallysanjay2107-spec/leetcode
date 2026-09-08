class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int t=n;
        while(n>0){
            count++;
            n=n/10;
        }
        int ans=0;
        if(count==4){
         ans=t-999;
         return ans;
        }
        if(count==5){
            int a;
            a=t-9999;
            ans=a+9000;
            return ans;
        }
        if(count==6){
          int b;
            b=t-99999;
            ans=b+99000;
            return ans;  
        }

        return ans;
    }
};