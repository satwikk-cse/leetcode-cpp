class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int i=0, j=people.size()-1;
        while(i<=j)
        {
            if(i==j)
            {
                count++;
                break;
            }
            else if(people[i]+people[j]<=limit)
            {
                count++;
                i++;
                j--;
            }
            else if(people[i]<=limit)
            {
                count++;
                j--;
            }
            else if(people[j]<=limit)
            {
                count++;
                j--;
            }
        }
        return count;
    }
};