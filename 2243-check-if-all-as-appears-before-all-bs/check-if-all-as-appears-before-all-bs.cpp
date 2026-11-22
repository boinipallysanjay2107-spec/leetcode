class Solution {
public:
    bool checkString(string s) {
        int flag=0;
        for(char c:s){
            if(c=='b'){
                flag=1;
            }
            if(flag==1&&c=='a'){
                return 0;
            }
        }
        return 1;
    }
};