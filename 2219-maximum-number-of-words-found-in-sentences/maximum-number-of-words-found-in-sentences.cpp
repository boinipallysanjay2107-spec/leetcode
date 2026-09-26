class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int Max=INT_MIN;
        for(string s:sentences){
            int count=0;
            for(char ch:s){
                if(ch==' '){
                    count++;
                }
            }
            Max=max(Max,count);
        }
        return Max+1;
    }
};