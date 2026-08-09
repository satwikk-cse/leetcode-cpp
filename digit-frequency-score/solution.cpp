class Solution {
public:
    int digitFrequencyScore(int n) {
        // int score=0;
        // vector<int>freq(100,0);
        // while(n>0)
        // {
        //     int a=n%10;
        //     freq[a]++;
        //     n/=10;
        // }
        // for(int i=0;i<freq.size();i++)
        // {
        //     score+=i*freq[i];
        // }
        // return score;

        int sum=0;
        while(n>0)
        {
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
};