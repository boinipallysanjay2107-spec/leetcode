class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> s=heights;
        sort(heights.begin(),heights.end());
        int n=heights.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]!=heights[i])
            count++;
        }
        return count;
    }
};