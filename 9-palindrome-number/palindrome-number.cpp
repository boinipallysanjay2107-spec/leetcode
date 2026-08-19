class Solution {
public:
    bool isPalindrome(int x) {
        int dig=0;
        int y=x;
        long long rev=0;
        if(x>=0){
            while(x>0){
               dig=0;
               dig=x%10;
               rev=rev*10+dig;
               x=x/10;
            }
            if(rev==y)
            return 1;
            else
            return 0;
        }
        else{
            return 0;
        }
    }
};