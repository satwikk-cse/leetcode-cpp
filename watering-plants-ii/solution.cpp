class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n=plants.size();
        int i=0, j=n-1;
        int count=0;
        int A=capacityA, B=capacityB;
        while(i<j)
        {
            
            if(A<plants[i])
           {
                A=capacityA;
                count++;
                A-=plants[i];
                i++;
           }
           else if(A>=plants[i])
           {
                A-=plants[i];
                i++;
           }
          if(B<plants[j])
           {
                B=capacityB;
                count++;
                B-=plants[j];
                j--;
           }
           else if(B>=plants[j])
           {
                B-=plants[j];
                j--;
           }
        }
        if(i==j)
           {
                if(B>A)
                {
                    if(B<plants[j])
                    {
                        B=capacityB;
                        count++;
                    }
                    B-=plants[j];
                }
                else
                {
                    if(A<plants[i])
                    {
                        A=capacityA;
                        count++;
                    }
                    A-=plants[i];
                }
           }
        return count;
    }
};