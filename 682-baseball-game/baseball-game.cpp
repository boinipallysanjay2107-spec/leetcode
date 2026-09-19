class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(string s:operations){
            if(s=="C"){
                ans.pop_back();
            }
            else if(s=="+"){
                ans.push_back(*(ans.end()-1)+*(ans.end()-2));
            }
            else if(s=="D"){
                ans.push_back(*(ans.end()-1)*2);
            }
            else{
                ans.push_back(stoi(s));
            }
        }
        int sum=0;
        for(int val:ans){
           sum=sum+val;
        }
        return sum;
    }
};