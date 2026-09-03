class Solution {
public:
    int digitFrequencyScore(int n) {
        int arr[10]={};
        int n1=n;
        int digit=0;
        while(n>0){
           digit=n%10;
           n=n/10;
           arr[digit]++;
        }
        int sum=0;
        while(n1>0){
           digit=n1%10;
           n1=n1/10;
           sum=sum+digit;
        }
        return sum;
    }
};