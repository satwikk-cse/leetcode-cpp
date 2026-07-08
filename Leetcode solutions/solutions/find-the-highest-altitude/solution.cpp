class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0;
        int temp=0;
        for(int i=0;i<gain.size();i++)
        {
            temp+=gain[i];
            if(temp>high)
            {
                high=temp;
            }
        }
        return high;
    }
};