class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double val1=celsius+273.15;
        ans.push_back(val1);
        double val2=celsius*1.80+32.00;
        ans.push_back(val2);
        return ans;
    }
};