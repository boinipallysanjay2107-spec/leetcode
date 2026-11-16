class Solution {
public:
    int countHomogenous(string s) {
         long long sum=0;
        long long count=1;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]&&i!=s.length()-1){
                count++;
            }
            else {
                sum=sum+((count*(count+1))/2)%1000000007;
                count=1;
            }
        }
        return sum%1000000007;
    }
};