class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int d;
        int dum;
        int flag=1;
        vector<int> ans;
        for(int i=left;i<=right;i++){
            d=0;
           dum=i;
           flag=1;
           while(dum>0){
            d=dum%10;
            dum=dum/10;
            if(d==0||i%d!=0){
                flag=0;
            }
            
           }
         if(flag) ans.push_back(i);
        }
        return ans;
    }
};