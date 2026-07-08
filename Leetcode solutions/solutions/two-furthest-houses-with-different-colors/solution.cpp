class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max_distance=INT_MIN;
        for(int i=0;i<colors.size();i++)
        {
            for(int j=0;j<colors.size();j++)
            {
                if(i!=j && abs(i-j)>max_distance && colors[i]!=colors[j])
                {
                    max_distance=abs(i-j);
                }
            }
        }
        return max_distance;
    }
};