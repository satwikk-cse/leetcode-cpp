class Solution {
public:
    long long maxSum(vector<int>& nums, int k, long long mul) {
        long long sum=0;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<k;i++)
        {
            if(mul>1)
            {
                sum+=(nums[i]*mul);
                mul--;
            }
            else
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};