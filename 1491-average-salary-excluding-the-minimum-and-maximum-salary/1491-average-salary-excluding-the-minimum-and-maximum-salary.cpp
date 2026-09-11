class Solution {
public:
    double average(vector<int>& salary) {
        int count=salary.size()-2;
        int max=INT_MIN, min=INT_MAX;

        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]>max) max=salary[i];
            if(salary[i]<min) min=salary[i];
        }

        float sum=(-max-min);
        for(int i=0;i<salary.size();i++)
        {
            sum+=salary[i];
        }

        return (double)sum/count;
    }
};