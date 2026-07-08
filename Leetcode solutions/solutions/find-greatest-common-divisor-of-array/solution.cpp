class Solution {
public:
    int findGCD(vector<int>& nums) {
        int low=INT_MAX,high=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<low)
            {
                low=nums[i];
            }
            if(nums[i]>high)
            {
                high=nums[i];
            }
        }
        int a=gcd(low,high);
        return a;
    }
};