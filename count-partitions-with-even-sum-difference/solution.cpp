class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        for(int m=1;m<nums.size();m++)
        {
            int i=0, j=m, k=nums.size()-1;
            int lsum=0, rsum=0;
            for(int a=i;a<j;a++)
            {
                lsum+=nums[a];
            }
            for(int a=j;a<=k;a++)
            {
                rsum+=nums[a];
            }
            if((lsum-rsum)%2==0) count++;
        }
        return count;
    }
};