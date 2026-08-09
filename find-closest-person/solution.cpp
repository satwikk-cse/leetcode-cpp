class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(y-z)==abs(x-z)) return 0;
        if(abs(y-z)>abs(x-z)) return 1;
        return 2;
    }
};