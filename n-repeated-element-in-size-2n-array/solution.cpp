class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int temp=0;
        int n=nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    temp=nums[i];
                }
            }
        }
        return temp;
    }
};