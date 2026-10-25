class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int cm=0, off=0, uniq=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]!=nums[i])
            {
                off++;
                nums[off]=nums[i+1];
                uniq++;
            }
            cm++;
        }
        return uniq;
    }
};