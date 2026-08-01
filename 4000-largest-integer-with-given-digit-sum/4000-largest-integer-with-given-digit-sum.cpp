class Solution {
public:
    int digit_sum(int x) {
        int sum=0;
        while(x>0)
        {
            int a=x%10;
            sum+=a;
            x/=10;
        }
        return sum;
    }
    int nod(int x)
    {
        int count=0;
        while(x>0)
        {
            count++;
            x/=10;
        }
        return count;
    }
    int largestInteger(int n, int s) {
        int largest_integer=-1;
        for(int i=0;i<pow(10,n);i++)
        {
            if(nod(i)<=n && digit_sum(i)==s && i>largest_integer)
            {
                largest_integer=i;
            }
        }
        return largest_integer;
    }
};