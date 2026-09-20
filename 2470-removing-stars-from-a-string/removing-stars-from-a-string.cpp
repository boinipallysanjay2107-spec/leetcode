class Solution {
public:
    string removeStars(string s) {
        int top=-1;
        int n=s.length();
        char stack[n+1];
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                if(top==n-1){
                    return "0";
                }
                top++;
                stack[top]=s[i];
            }
            else{
                if(top==-1){
                    return "0";
                }
                stack[top]=NULL;
                top--;

            }
        }
       stack[top+1]='\0';
       return stack;
    }
};