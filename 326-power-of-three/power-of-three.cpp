class Solution {
public:
    bool isPowerOfThree(int n) {
     /*   long long  d=1;
        while(d<n){
            d=d*3;
        }
        if(d==n) return 1;
        return 0; */
        return n>0&&int(pow(3,19))%n==0;

    }
};