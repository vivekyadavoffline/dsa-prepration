#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> arr = {5, 3, 2, 5, 7, 3};

    bubbleSort(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}