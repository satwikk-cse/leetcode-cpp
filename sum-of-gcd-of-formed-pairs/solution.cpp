class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long max=LLONG_MIN;
        vector<long long>prefix_gcd(nums.size(),0);
        vector<long long>mx;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max) max=nums[i];
            mx.push_back(max);
            prefix_gcd[i]=gcd(nums[i],mx[i]);
        }
        sort(prefix_gcd.begin(),prefix_gcd.end());

        int i=0, j=prefix_gcd.size()-1;
        long long sum=0;
        while(i<j)
        {
            sum+=gcd(prefix_gcd[i],prefix_gcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};