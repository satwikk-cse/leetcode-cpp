class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]>0)
            {
                int a=nums[i]%10;
                sum+=a;
                nums[i]/=10;
            }
            nums[i]=sum;
            sum=0;
        }
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};