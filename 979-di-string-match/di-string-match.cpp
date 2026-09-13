class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int n=s.length();
        int b=n;
        int a=0;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
               ans.push_back(a);
               a++;
            }
            if(s[i]=='D'){
              ans.push_back(b);
               b--;  
            }
        }
        int sum=0;
        for(int val:ans){
            sum=sum+val;
        }
        int num=(n*(n+1))/2;
        ans.push_back(num-sum);
        return ans;
    }
};