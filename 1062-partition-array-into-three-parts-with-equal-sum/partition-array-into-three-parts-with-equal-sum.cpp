class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int val:arr){
            sum=sum+val;
        }
        if(sum%3!=0){
            return 0;
        }
        sum=sum/3;
        int s=0;
        int count=0;
        for(int i=0;i<arr.size();i++){
            s=s+arr[i];
            if(s==sum) {
                count++;
                s=0;
            }
        }
        if(count>=3) return 1;
        return 0;
    }
};