class Solution {
public:
    int balancedStringSplit(string s) {
        unordered_map<char,int> m;
        int count=0;
        for(char c:s){
            m[c]++;
            if(m['R']==m['L']) {
                m['R']=0;
                m['L']=0;
                count++;
            }
        }
        return count;
    }
};