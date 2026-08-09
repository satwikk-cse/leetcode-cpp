class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Step-1: Finding pivot index
        int idx=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx=i;      // Pivot index
                break;
            }
        }

        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        
        // Step-2: Sorting/Reverse after pivot
        reverse(nums.begin()+idx+1,nums.end());

        //Step-3 Finding just greater element that idx
        int j=-1;
        for(int i=idx+1;i<nums.size();i++)
        {
            if(nums[i]>nums[idx])
            {
                j=i;
                break;
            }
        }

        // Step-4: Swapping nums[idx] and nums[j]
        swap(nums[idx],nums[j]);
    }
};
