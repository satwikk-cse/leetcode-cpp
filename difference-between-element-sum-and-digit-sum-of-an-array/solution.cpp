class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            ele_sum+=nums[i];
        }
        int digit_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]>0)
            {
                int a=nums[i]%10;
                digit_sum+=a;
                nums[i]/=10;
            }
        }
        return abs(ele_sum-digit_sum);
    }
};