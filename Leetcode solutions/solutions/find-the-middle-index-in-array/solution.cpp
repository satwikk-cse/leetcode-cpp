class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int lsum=0, rsum=0, temp=-1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                lsum+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++)
            {
                rsum+=nums[j];
            }
            if(lsum==rsum)
            {
                temp=i;
                break;
            }
            lsum=0;
            rsum=0;
        }
        return temp;
    }
};