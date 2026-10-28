
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s, part;

    cin >> s >> part;

    cout << sol.removeOccurrences(s, part) << endl;

    return 0;
}
