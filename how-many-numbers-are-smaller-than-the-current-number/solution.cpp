class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>count;
        for(int i=0;i<nums.size();i++)
        {
            int temp=0;
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i && nums[j]<nums[i])
                {
                    temp++;
                }
            }
            count.push_back(temp);
        }
        return count;
    }
};