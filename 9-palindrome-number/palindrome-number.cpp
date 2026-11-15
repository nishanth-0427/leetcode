class Solution {
public:
    bool isPalindrome(int x) {
        long last_digit, reversed = 0, orginal_x = x;

        if (x < 0) {
            return false;
        }
        else {
            do {
                last_digit = x % 10;
                reversed = 10 * reversed + last_digit;
                x = x / 10;
            } while(x!=0);

            if(orginal_x == reversed) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};