class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(int val1:arr1){
            bool f=true;
            for(int val2:arr2){
                if(abs(val1-val2)<=d)
                f=false;
            }
            if(f==true){
                count++;
            }
        }
        return count;
    }
};