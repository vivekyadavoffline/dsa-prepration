#include <iostream>
#include <vector>
using namespace std;

int binary_search_for_rotated_array(vector<int> arr, int tar) {

    int st = 0, end = arr.size() - 1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (arr[mid] == tar) {
            return mid;
        }

        // Left half is sorted
        if (arr[st] <= arr[mid]) {

            if (arr[st] <= tar && tar < arr[mid]) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }//

        // Right half is sorted
        else {

            if (arr[mid] < tar && tar <= arr[end]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }   }
    }
    return -1;
}

int main() {

    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    int tar1 = 0;

    cout << binary_search_for_rotated_array(arr1, tar1) << endl;

    return 0;
}