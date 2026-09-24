class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        if (i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.length() && s[i] == '+') {
            i++;
        }

        while (i < s.length()) {
            int digit = s[i] - '0';

            if (digit < 0 || digit > 9) {
                break;
            }

            if (num > INT_MAX / 10 ||
                (num == INT_MAX / 10 && digit > 7)) {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return num * sign;
    }
};