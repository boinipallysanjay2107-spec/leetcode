class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        /*set<int> s;
        int count=0;
        int Max=-1;
        for(int i=0;i<fruits.size();i++){
             count=0;
             for(int j=i;j<fruits.size();j++){
                s.insert(fruits[j]);
                if(s.size()>2){
                    break;
                }
                count++;
             }
             Max=max(Max,count);
             s.clear();
        }
        return Max; */
        unordered_map<int,int> m;
        int Max=0;
        int l=0;
        for(int r=0;r<fruits.size();r++){
            m[fruits[r]]++;
            while(m.size()>2){
               m[fruits[l]]--;
               if(m[fruits[l]]==0) 
               m.erase(fruits[l]);
               l++;
            }
           Max=max(Max,r-l+1);
        }
        return Max;
    }
};