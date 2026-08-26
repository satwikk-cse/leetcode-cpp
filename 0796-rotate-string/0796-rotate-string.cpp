class Solution {
public:
    void rotate(string &s)
    {
        char temp=s[s.size()-1];
        for(int i=s.size()-2;i>=0;i--)
        {
            s[i+1]=s[i];
        }
        s[0]=temp;
    }
    bool rotateString(string s, string goal) {
        int a=s.size();
        while(a>0)
        {
            if(s==goal) return true;
            rotate(s);
            a--;
        }
        return false;
    }
};