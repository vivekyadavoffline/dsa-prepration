#include<iostream>
using namespace std;
int main(){
int arr[]={ 1,5,3,4,2,6,7,8,9,3,12,32,34,5,6,76};
int n = 16;
int index =-1;
for(int i =0 ; i <n ; i++){
    if(arr[i]==2){
        index = i;
        
    }
}
cout<<index;
return 0;
}