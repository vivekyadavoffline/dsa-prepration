// #include <iostream> 
// #include <vector> 
// using namespace std; 
 
// int singleElement(vector<int> arr) { 
//     for (int i = 1; i < arr.size() - 1; i++) { 
 
//         if (arr[i - 1] == arr[i] || arr[i + 1] == arr[i]) { 
//             i++; 
//         } 
//         else { 
//             return arr[i]; 
//         } 
//     } 
 
//     // Check first and last element 
//     if (arr[0] != arr[1]) 
//         return arr[0]; 
 
//     if (arr[arr.size() - 1] != arr[arr.size() - 2]) 
//         return arr[arr.size() - 1]; 
 
//     return -1; 
// } 
 
// int main() { 
//     vector<int> arr = {1,1,2,3,3,4,4,8,8}; 
 
//     cout << singleElement(arr) << endl; 
 
//     return 0; 
// } 
 
#include <iostream> 
#include <vector> 
using namespace std; 
 
int singleElement(vector<int> arr) 
{ 
    int st = 0, end = arr.size() - 1; 
    
    while (st < end) 
    { 
        int mid = st + (end - st) / 2; 

        if (mid > 0 && mid < arr.size() - 1)
        {
            if (arr[mid - 1] != arr[mid] && arr[mid + 1] != arr[mid]) 
            { 
                return arr[mid]; 
            } 
        }

        if (mid % 2 == 0) 
        { 
            if (arr[mid] == arr[mid + 1]) 
            { 
                st = mid + 2; 
            } 
            else 
            { 
                end = mid; 
            } 
        } 
        else
        { 
            if (arr[mid - 1] == arr[mid]) 
            { 
                st = mid + 1; 
            } 
            else 
            { 
                end = mid; 
            } 
        } 
    }

    return arr[st]; 
} 
 
int main() 
{ 
    vector<int> arr = {1
        ,1,2,2,3,3,4,4,8,8,9}; 
 
    cout << singleElement(arr) << endl; 
 
    return 0; 
}