class Solution {
public:
    int rev(int x) {
        int rev=0;
        while(x>0) {
            rev=(rev*10)+(x%10);
            x/=10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]-rev(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                count=count%1000000007;
                count+=mp[nums[i]];
            }
            mp[nums[i]]++;
        }
        return count%1000000007;
    }
};