class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans={};
          for(int i=0;i<n;i++){
                ans.push_back(0);
            }

        if(k==0){
            return ans;
        }
        else if(k>0){
            for(int i=0;i<code.size();i++){
                for(int j=1;j<=k;j++){
                    ans[i]=ans[i]+code[(i+j)%n];
                }
            }
        }
        else{
           for(int i=0;i<code.size();i++){
                for(int j=1;j<=-k;j++){
                    ans[i]=ans[i]+code[((i-j)%n+n)%n];
                }
            } 
        }
        return ans;
    }
};