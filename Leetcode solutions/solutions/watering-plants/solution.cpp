class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step=0;
        int water=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(water>=plants[i])
            {
                water=water-plants[i];
                step++;
            }
            else
            {
                step+=2*i+1;
                water=capacity-plants[i];
            }
        }
        return step;
    }
};