class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>freq(100000,0);
        int temp;
        int count=-1;
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]==0)
            {
                count++;
                if(count==k)
                {
                    temp=i;
                    break;
                }
            }
        }
        return temp;
    }
};