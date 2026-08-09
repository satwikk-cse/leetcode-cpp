class Solution {
public:
    int maxArea(vector<int>& height) {
        int mxarea=0;
        int area=0;
        int i=0, j=height.size()-1;
        while(i<j)
        {
            area=(min(height[i],height[j]))*abs(i-j);
            if(area>mxarea)
            {
                mxarea=area;
            }
            if(height[i]<height[j]) i++;
            else j--;
        }
        return mxarea;
    }
};