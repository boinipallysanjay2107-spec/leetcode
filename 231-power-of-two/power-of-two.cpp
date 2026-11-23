class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return 0;
        if(n>0&&(1<<31)%n==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};