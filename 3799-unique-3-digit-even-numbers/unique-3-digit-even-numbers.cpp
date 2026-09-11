class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count=0;
        int num;
        set<int> ans;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    num=0;
                    if(digits[i]!=0&&(i!=j&&i!=k&&j!=k)){
                      num=digits[i]*100+digits[j]*10+digits[k];
                      ans.insert(num);
                    }
                }
            }
        }
        for(int val:ans){
            if(val>99&&val%2==0)
            count++;
        }
        return count;
    }
};