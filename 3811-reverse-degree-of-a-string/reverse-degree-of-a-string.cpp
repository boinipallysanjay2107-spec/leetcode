class Solution {
public:
    int reverseDegree(string s) {
        int prod=1;
        int sum=0;
        for(int i=0;i<s.length();i++){
            prod=1;
            prod=(26-(s[i]-'a'))*(i+1);
            sum=sum+prod;
        }
        return sum;
    }
};