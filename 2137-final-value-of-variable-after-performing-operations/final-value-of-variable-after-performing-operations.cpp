class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
           for(int val=0;val<operations.size();val++){
            if(operations[val]=="--X")
            --x;
            if(operations[val]=="X--")
            x--;
             if(operations[val]=="++X")
            ++x;
            if(operations[val]=="X++")
            x++;
       }
        return x;
    }
};