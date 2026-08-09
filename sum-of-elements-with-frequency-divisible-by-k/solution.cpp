class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int>freq(101,0);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]%k==0)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};