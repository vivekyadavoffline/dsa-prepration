
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Container With Most Water

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int maxWater = 0;

    for (int i = 0; i < height.size(); i++) {

        for (int j = i + 1; j < height.size(); j++) {

            int width = j - i;

            int h = min(height[i], height[j]);

            int water = width * h;

            maxWater = max(maxWater, water);
        }
    }

    cout << "Maximum Water: " << maxWater << endl;

    return 0;
}