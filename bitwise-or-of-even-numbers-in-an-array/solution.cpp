class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int a=0, b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                a=nums[i];
                break;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                b=a|nums[i];
                a=b;
            }
        }
        return b;
    }
};