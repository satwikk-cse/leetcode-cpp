class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int a=s.size()-1;
        int space=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ') space++;
        }
        if(space==0) return s.size();
        while(s[a]==' ')
        {
            a--;
        }
        while(a>=0 && s[a]!=' ')
        {
            count++;
            a--;
        }
        return count;
    }
};