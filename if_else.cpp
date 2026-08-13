#include<iostream>
using namespace std;
int main(){
    // int a  ;
    // cout<<"enter a number to check wheather its positve or nagative"<<endl;
    // cin>>a;
    // if( a >= 0){
    //     cout<<"its a positve number"<<endl;
    // }
    // else{
    //     cout<<"it a negative number"<<endl;
    // }
    // int a =2;
    // while( a<2048){
    //     cout<<"hello ji"<<a<<endl;
    //     cout<<"ha ji"<<endl;
    //     a=a*a;
    // }


    // for(int i=0 ; i < 100 ; i++) {
    //    cout<<i<<endl;
    // }


// int sum = 0 ;
//     for(int i = 0 ; i<= 30 ; i++ ){
//        sum += i;
//        if(i == 4){
//         break;
//        }
//     }
//     cout<<sum;

// int sum = 0 ;
//     for(int i = 1 ; i<= 10 ; i+=2 ){
//        sum += i;
//        if(i == 4){
//         break;
//        }
//     }
//     cout<<sum;


int oddSum = 0;
for(int i = 1 ; i<=10 ; i++ ){
    if(i %2 != 0){
        oddSum += i;
    }

}
cout<<oddSum;
    return 0;

}