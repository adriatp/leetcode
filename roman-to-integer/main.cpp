#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int letterToInt(char c) {
        int value = 0;
        switch(c) {
            case 'I':
                value = 1;
                break;
            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
        }
        return value;
    }
    int romanToInt(string s) {
        int total=0, i=0;
        for (i=0; i<s.length()-1; i++) {
            if (letterToInt(s[i]) < letterToInt(s[i+1]))
                total -= letterToInt(s[i]);
            else
                total += letterToInt(s[i]);
        }
        total += letterToInt(s[i]);
        return total;
    }
};

int main() {
    Solution s;
    cout << s.romanToInt("III") << endl;
    cout << s.romanToInt("LVIII") << endl;
    cout << s.romanToInt("MCMXCIV") << endl;
    return 0;
}