class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return 0;
        }
        s=s+s;
        if(s.find(goal)!=string::npos){
            return true;
        }
        return 0;
    }
};