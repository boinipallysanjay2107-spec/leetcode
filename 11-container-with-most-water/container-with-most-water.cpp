class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int long long a;
        int long long mi=-1;
        int h;
        int width;
        while(i<j){
             h=min(height[i],height[j]);
             width=j-i;
            a=h*width;
            mi=max(mi,a);
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return mi;
    }
};