class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int a;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            a=nums[i]^nums[i+1];
            if(a==0)
            {
                return true;
            }
        }
        return false;
    }
};