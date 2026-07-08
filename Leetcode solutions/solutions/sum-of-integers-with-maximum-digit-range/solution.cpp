class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int sum=0;
        int max_digit_range=INT_MIN;
        int digit_range=0;
        for(int i=0;i<nums.size();i++)
        {
            int largest=INT_MIN;
            int smallest=INT_MAX;
            int temp=nums[i];
            while(temp>0)
            {
                int rem=temp%10;
                if(rem>largest) largest=rem;
                if(rem<smallest) smallest=rem;
                temp/=10;
            }
            digit_range=largest-smallest;
            if(digit_range>max_digit_range) max_digit_range=digit_range;
        }
        for(int i=0;i<nums.size();i++)
        {
            int largest=INT_MIN;
            int smallest=INT_MAX;
            int temp=nums[i];
            while(temp>0)
            {
                int rem=temp%10;
                if(rem>largest) largest=rem;
                if(rem<smallest) smallest=rem;
                temp/=10;
            }
            digit_range=largest-smallest;
            if(digit_range==max_digit_range) sum+=nums[i];
        }
        return sum;
    }
};