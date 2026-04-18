//used two pointer approach to optimize the solution
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
     int l = 0, r=n-1;
     int maxWater=0;
     while(l<r){
        int width = r -l;
        int hight = min(height[l],height[r]);
        int currentW = width*hight;
        maxWater = max(maxWater,currentW);
        height[l]<height[r] ? l++ :r--;
     }
     return maxWater;
    }
};