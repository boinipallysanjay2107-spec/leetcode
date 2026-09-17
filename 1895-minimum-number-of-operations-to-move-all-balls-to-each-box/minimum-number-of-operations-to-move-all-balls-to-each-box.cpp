class Solution {
public:
    vector<int> minOperations(string boxes) {
        int ball=0;
        vector<int> ans;
        for(int i=0;i<boxes.length();i++){
            ball=0;
            for(int j=0;j<boxes.length();j++){
              if(j!=i){
               if(boxes[j]=='1'){
                ball=ball+(j>i?j-i:i-j);
               }
                }
            }
            ans.push_back(ball);
        }
        return ans;
    }
};