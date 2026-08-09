class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int count=-1;
        for(int i=0;i<nums.size();i++)
        {
            int temp=count;
            if(nums[i]!=0)
            {
                count++;
            }
            if(temp<count)
            {
                int t=nums[count];
                nums[count]=nums[i];
                nums[i]=t;
            }
        }
        return nums;
    }
};