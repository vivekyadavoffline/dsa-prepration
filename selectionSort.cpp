#include <iostream>
#include <vector>
using namespace std;
//l
void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int smallestIndex = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }

        swap(arr[i], arr[smallestIndex]);
    }
}

int main()
{
    vector<int> arr = {3, 4, 6, 2, 1, 5, 9, 8};

    selectionSort(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}