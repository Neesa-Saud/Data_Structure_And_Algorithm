//as given constrants have n=10^5 but this will give n^2 solution 
class Solution {
public:
    int maxArea(vector<int>& height) {
     int n = height.size();
     int mw = 0;
     for(int i =0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            int width = j - i ;
            int hight = min(height[i],height[j]);
            int area = width * hight ;
            mw = max(mw,area);
        }
     }  
     return mw ;
    }
};