class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {

        sort(arr.begin(),arr.end(),greater<int>());
        do{
            int hour=arr[0]*10+arr[1];
            int min=arr[2]*10+arr[3];
            if(hour<24&&min<60){
                return to_string(arr[0])+to_string(arr[1])+":"+to_string(arr[2])+to_string(arr[3]);
            }
        }while(prev_permutation(arr.begin(),arr.end()));
        return "";
    }
};