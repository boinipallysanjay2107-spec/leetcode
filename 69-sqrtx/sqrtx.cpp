class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        long long l=0;
        long long  r=x/2;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long sq=mid*mid;
            if(sq==x) return (int)mid;
            else if(sq>x) r=mid-1;
            else l=mid+1;
        }
        return (int)r;
    }
};