#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> arr) {
    int st = 0;
    int end = arr.size() - 1;

    while (st < end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] < arr[mid + 1]) {
            st = mid + 1;
        }
        else {
            end = mid;
        }
    }

    return st;
}

int main() {
    vector<int> arr = {0, 1, 2, 3, 2, 1, 0};

    cout << peakIndex(arr) << endl;

    return 0;
}