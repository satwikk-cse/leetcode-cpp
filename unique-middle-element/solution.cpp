class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        vector<int>freq(101,0);
        int mid=nums[nums.size()/2];
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        
        if(freq[mid]==1) return true;
        return false;
    }
};