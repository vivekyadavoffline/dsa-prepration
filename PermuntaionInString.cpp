#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
            return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        for (int i = 0; i < s1.length(); i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2)
            return true;

        for (int i = s1.length(); i < s2.length(); i++) {
            freq2[s2[i] - 'a']++;
            freq2[s2[i - s1.length()] - 'a']--;

            if (freq1 == freq2)
                return true;
        }

        return false;
    }
};

int main() {
    Solution sol;

    string s1, s2;
    cin >> s1 >> s2;

    cout << (sol.checkInclusion(s1, s2) ? "true" : "false")
         << endl;

    return 0;
}