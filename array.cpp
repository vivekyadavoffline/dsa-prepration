#include<iostream>
using namespace std;
// int main(){
//     int marks[5]={10,30,40,55,64};
//    for(int i = 0 ; i<= 4 ; i++) {cout<<marks[i]<<endl;}
//     cout<<sizeof(marks) / sizeof(int)<<endl;
//     return 0;
// }



// int main(){
//    int  nums[] = {-23,4,6,-78,9,4,7,4,3,4,67};
//    int n = 11;
//    int index = -1;
//     int smallest = INT_MAX;
//     for(int i = 0 ; i <n ; i++){
//         if (nums[i] < smallest){
//             smallest = nums[i];
//          index = i;
//         }

//         // smallest = min(smallest, nums[i]);
       
//     }
//     cout<<smallest<<"   "<<index<<endl;
//     return 0;
// }

void changeArr(int arr[], int size){
    for(int i = 0 ; i<size ; i++){
        arr [i] = 2*arr[i];
    }
  cout<<"in function\n";
}

int main(){
    int arr[3]={1,2,3};
    changeArr(arr,3);
    cout<<"in main function\n";

    for(int i = 0 ; i < 3; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}