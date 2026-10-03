#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int>& arr) {
    int n = arr.size();

    int count0 = 0, count1 = 0, count2 = 0;

    // Count 0, 1 and 2
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    // Put 0s
    int idx = 0;

    for (int i = 0; i < count0; i++) {
        arr[idx++] = 0;
    }

    // Put 1s
    for (int i = 0; i < count1; i++) {
        arr[idx++] = 1;
    }

    // Put 2s
    for (int i = 0; i < count2; i++) {
        arr[idx++] = 2;
    }
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    Sort(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}