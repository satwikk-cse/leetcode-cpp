class Solution {
public:
    bool isPrime(int x) {
        if(x<=1) return false;
        if(x==2) return true;
        if(x%2==0) return false;
        for(int i=3;i<=sqrt(x);i+=2)
        {
            if(x%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int>freq(101,0);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(isPrime(freq[nums[i]])==true)
            {
                return true;
            }
        }
        return false;
    }
};