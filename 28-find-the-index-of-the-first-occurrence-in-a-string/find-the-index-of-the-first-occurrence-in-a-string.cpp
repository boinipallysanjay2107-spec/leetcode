class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.contains(needle)){
            for(int i=0;i<haystack.length();i++){
                if(haystack.substr(i,needle.length())==needle){
                    return i;
                }
            }
        }
            return -1;
    }
};