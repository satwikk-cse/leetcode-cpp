class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(isvowel(s[i])==true && isvowel(s[j])==true)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isvowel(s[i])==false) i++;
            else if(isvowel(s[j])==false) j--;
        }
        return s;
    }
    bool isvowel(char a){
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        {
            return true;
        }
        return false;
    }
};