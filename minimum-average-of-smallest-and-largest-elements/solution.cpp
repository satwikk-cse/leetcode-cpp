class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>averages;
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1;
        while(i<=j)
        {
            averages.push_back((float)(nums[i]+nums[j])/2);
            i++;
            j--;
        }
        double min=INT_MAX;
        for(int i=0;i<averages.size();i++)
        {
            if(averages[i]<min)
            {
                min=averages[i];
            }
        }
        return min;
    }
};