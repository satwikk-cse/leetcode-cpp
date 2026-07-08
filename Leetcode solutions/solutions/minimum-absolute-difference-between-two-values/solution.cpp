class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int min=INT_MAX;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==1 && nums[j]==2)
                {
                    if(abs(i-j)<min)
                    {
                        min=abs(i-j);
                        count++;
                    }
                }
            }
        }
        if(count==0)
        {
            return -1;
        }
        return min;
    }
};