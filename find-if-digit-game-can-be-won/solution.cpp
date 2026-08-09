class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sd=0, dd=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=9)
            {
                sd+=nums[i];
            }
            else
            {
                dd+=nums[i];
            }
        }
        if(sd!=dd) return true;
        return false;
    }
};