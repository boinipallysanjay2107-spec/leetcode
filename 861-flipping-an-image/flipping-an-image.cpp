class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for(auto &val:image)  {
        reverse(val.begin(),val.end());
        for(int i=0;i<val.size();i++){
          if(val[i]==0){
              val[i]=1;
          }  
          else{
            val[i]=0;
          }
        }
    } 
    return image; 
    }
};