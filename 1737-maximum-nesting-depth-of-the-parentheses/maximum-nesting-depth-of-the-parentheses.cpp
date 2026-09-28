class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int Max=INT_MIN;
        for(char ch:s){
            if(ch=='('){
                count++;
            }
            else if(ch==')'){
                count--;
            }
            Max=max(Max,count);
        }
        return Max;
    }
};