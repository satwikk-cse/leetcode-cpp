class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        if(max!=nums.size()-1) return false;
        vector<int>freq(201,0);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[nums.size()-1]]!=2)
            {
                return false;
            }
            else if(nums[i]!=nums[nums.size()-1] && freq[nums[i]]!=1)
            {
                return false;
            }
        }
        return true;
    }
};