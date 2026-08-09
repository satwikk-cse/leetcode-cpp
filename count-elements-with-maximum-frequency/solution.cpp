class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>freq(101,0);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]>max) max=freq[nums[i]];
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]==max) count++;
        }
        return count;
    }
};