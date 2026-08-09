class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;      // tumhara increment idea
                return digits;    // yahi tum miss kar rahe the
            }
            digits[i] = 0;        // tumhara 9 -> 0 idea
        }

        // ye wahi case hai jo tum "single digit" bol rahe the
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
