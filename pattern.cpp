#include<iostream>
using namespace std;
int main(){
    // int n =10 ;
    // for( int i = 1 ; i<=n ; i++){
    //     for( int j = 1 ; j<= n; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //   int n =5 ;
    // for( int i = 1 ; i<=n ; i++){
    //     for( int j = 1 ; j<= n; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    //  int n =26 ;
    // for( int i = 1 ; i<=n ; i++){
    //     char ch = 'A' ;
    //     for( int j = 0 ; j<=n-1; j++){
    //         cout<< ch ;
    //         ch += 1 ;
    //     }
    //     cout<<endl;
    // }

    // int n = 3;
    // int num = 1;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    //  int n =5 ;
    //  int num= 1;
    // for( int i = 0 ; i<=n-1 ; i++){
    //     for( int j = 1 ; j<= i+1 ; j++){
    //         cout<<num;
            
    //     }
    //     num++;
    //     cout<<endl;
    // }

    // int n =10;
    // char ch = 'A';
    // for( int i = 0; i <= n - 1;i++){
    //     for(int j = 1 ; j <= i+1; j++){
    //         cout<<ch;
    //     }
    //     ch +=1;
    //     cout<<endl;
    // }
     
    // int  n = 5;
    // for( int i=0; i<=n-1;i++){
    //     for(int j=1; j<= i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // int n =10;
    // int num=1;
    // for(int i =0; i<n;i++){
    //     for(int j = 0; j< i; j++){
    //         cout<<" ";
    //     }
    // for (int k =1; k <= n-i ; k++){
    //     cout<<num<<" ";
    // }
    // cout<<endl;
    // num++;
    // }
// int n = 4;
// // Upper half
// for (int i = 0; i < n; i++) {
//     // Left spaces
//     for (int j = 0; j < n - i - 1; j++) {
//         cout << " ";
//     }
//     cout << "*";
//     // Inner spaces + second star
//     if (i != 0) {
//         for (int j = 0; j < 2 * i - 1; j++) {
//             cout << " ";
//         }
//         cout << "*";
//     }
//     cout << endl;
// }
// // Lower half
// for (int i = n - 2; i >= 0; i--) {
//     // Left spaces
//     for (int j = 0; j < n - i - 1; j++) {
//         cout << " ";
//     }
//     cout << "*";
//     // Inner spaces + second star
//     if (i != 0) {
//         for (int j = 0; j < 2 * i - 1; j++) {
//             cout << " ";
//         }
//         cout << "*";
//     }
//     cout << endl;
// }

int n = 10;
for(int i = 0 ; i <= n-1 ; i++ ){
    for( int j = 0 ; j <= i ; j++){
        cout<<"*";
    } 
    for(int k = 1; k<= n -i - 1; k++ ){
        cout<<" ";
    }
      for(int m = 1; m<= n -i - 1; m++ ){
        cout<<" ";
    }
    
     for( int l = 0 ; l <= i ; l++){
        cout<<"*";}
cout<<endl;
}
for(int i = 0 ; i <= n-1 ; i++ ){
    for( int j = 1 ; j <= n-i ; j++){
        cout<<"*";
    } 
    for(int k = 0; k<= i - 1; k++ ){
        cout<<" ";
    }
      for(int m = 0; m<= i - 1; m++ ){
        cout<<" ";
    }
    
     for( int l = 1 ; l <= n-i ; l++){
        cout<<"*";}
cout<<endl;
}

return 0;
}