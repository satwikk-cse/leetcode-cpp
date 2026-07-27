class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if((nums[i]-1)*(nums[j]-1)>max && i!=j)
                {
                    max=(nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return max;
    }
};