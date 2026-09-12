class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        vector<int> dummy;
        int digit=0;
        for(int val:nums){
             dummy.clear();
            while(val>0){    
            digit=0;
            digit=val%10;
            val=val/10;
            dummy.push_back(digit);
            }
             reverse(dummy.begin(),dummy.end());
            ans.insert(ans.end(),dummy.begin(),dummy.end());
        }
        return ans;
    }
};