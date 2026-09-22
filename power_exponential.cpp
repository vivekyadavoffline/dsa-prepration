#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long binForm = n;
        double ans = 1;

        if (binForm < 0) {
            x = 1 / x;
            binForm = -binForm;
        }

        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= x;
            }

            x *= x;
            binForm /= 2;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    double x;
    int n;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter exponent: ";
    cin >> n;

    double result = sol.myPow(x, n);

    cout << "Answer: " << result << endl;

    return 0;
}