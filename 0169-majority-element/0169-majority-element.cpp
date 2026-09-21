class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int ans=-1;

        for(int i=0;i<nums.size();i++)
        {
            if(count==1)
            {
                ans=nums[i];
                count++;
            }
            else if(ans==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return ans;
    }
};