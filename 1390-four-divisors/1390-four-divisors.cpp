class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0, real_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(int j=1;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0 && j*j==nums[i])
                {
                    count++;
                    sum+=j;
                }
                else if(nums[i]%j==0)
                {
                    count+=2;
                    sum+=j;
                    sum+=nums[i]/j;
                }
            }
            if(count!=4)
            {
                sum=real_sum;
            }
            else
            {
                real_sum=sum;
            }
        }
        return sum;
    }
};