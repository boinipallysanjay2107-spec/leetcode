class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num=num/10;
        }
        int flag=0;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==6&&flag==0)
            {
             v[i]=9;
              flag=1;
            }
        }
        int one=1;
        int ans=0;
        for(int val:v){
             ans=ans+val*one;
             one=one*10;
        }
        return ans;
    }
};