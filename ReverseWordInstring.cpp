
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {
            // Skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) break;

            int j = i;

            // Find the beginning of the word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            // Add space between words
            if (ans.size() > 0) {
                ans += ' ';
            }

            // Append the word
            ans += s.substr(i + 1, j - i);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string s;
    getline(cin, s);

    cout << sol.reverseWords(s) << endl;
    return 0;
}
