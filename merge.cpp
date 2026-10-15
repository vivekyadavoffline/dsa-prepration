//merge 2 sorted array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m + n - 1;

        while (n > 0) {
            if (m > 0 && nums1[m - 1] > nums2[n - 1]) {
                nums1[p] = nums1[m - 1];
                m--;
            } else {
                nums1[p] = nums2[n - 1];
                n--;
            }
            p--;
        }
    }
};

int main() {
    Solution obj;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    int m = 3;
    int n = 3;

    obj.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}