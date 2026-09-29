class Solution {
public:
    string getPermutation(int n, int k) {
        string a="";
        for(int i=1;i<=n;i++)
        {
            a+=to_string(i);
        }

        while(k>1)
        {
            next_permutation(a.begin(),a.end());
            k--;
        }

        return a;
    }
};