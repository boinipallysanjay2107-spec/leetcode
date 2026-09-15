class Solution {
public:
    bool checkDivisibility(int n) {
        int long long sum=0;
        int long long prod=1;
        int n2=n;
        int digit=0;
        while(n>0){
            digit=n%10;
            sum=sum+digit;
            prod=prod*digit;
            n=n/10;
        }
        if(n2%(sum+prod)==0){
            return 1;
        }
        else return 0;

    }
};