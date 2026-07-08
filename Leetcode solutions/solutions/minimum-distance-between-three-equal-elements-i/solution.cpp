class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int temp=-1, min=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]==nums[j] && nums[j]==nums[k])
                    {
                        temp=abs(i-j)+abs(j-k)+abs(k-i);
                        if(temp<min)
                        {
                            min=temp;
                        }
                    }
                }
            }
        }
        if(min==INT_MAX)
        {
            min=-1;
        }
        return min;
    }
};