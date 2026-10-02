#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxAllowed) {
    int painters = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] > maxAllowed) {
            return false;
        }

        if (time + arr[i] <= maxAllowed) {
            time += arr[i];
        }
        else {
            painters++;
            time = arr[i];
        }
    }

    return painters <= m;
}

int painterPartition(vector<int>& arr, int m, int n) {

    int sum = 0;
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal;
    int end = sum;
    int ans = -1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {40, 30, 10, 20};

    int n = 4;
    int m = 2;

    cout << painterPartition(arr, m, n) << endl;

    return 0;
}