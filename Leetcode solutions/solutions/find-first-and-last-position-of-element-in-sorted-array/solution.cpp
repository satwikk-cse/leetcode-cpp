class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        if(nums.size()==1 && target==nums[0]) return {0,0};
        while(low<=high)
        {
            if(nums[high]!=target)
            {
                high--;
            }
            if(nums[low]!=target)
            {
                low++;
            }
            else if(nums[low]==target && nums[high]==target)
            {
                return {low,high};
            }
        }
        return {-1,-1};
    }
};