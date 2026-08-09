class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         long long int sum=0,count=0,n;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int r = sum % k;
        return r;
     }
};