class Solution {
public:
    void moveZeroes(vector<int>& nums) {
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
        
    }
};