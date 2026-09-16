class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int sum=0;
        int ans=0;
        string ans1;
        for(string s:words){
            sum=0;
            for(char c:s){
              sum=sum+weights[c-'a'];
            }
              ans=sum%26;
              char letter='a'+(25-ans);
            ans1=ans1+(letter);
        }
        return ans1;
    }
};