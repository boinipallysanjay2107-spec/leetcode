class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        for(char ch:stones){
            if(jewels.find(ch)!=string::npos){
                c++;
            }
        }
        return c;
    }
};