class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr_len=1;     // Current length
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[curr_len-1])
            {
                nums[curr_len]=nums[i];
                curr_len++;
            }
        }
        return curr_len;
    }
};