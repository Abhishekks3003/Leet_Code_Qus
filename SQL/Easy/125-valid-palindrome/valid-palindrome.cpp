#include <iostream>
#include <cctype>

class Solution {
public:
    string remove_space(string s) {
        string s1;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                s1 += tolower(s[i]);
            }
        }
        return s1;
    }

    bool isPalindrome(string s) {
        string s1 = remove_space(s);
        int len = s1.length();
        for (int i = 0; i < len / 2; i++) {
            if (s1[i] != s1[len - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
