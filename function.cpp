#include<iostream>
using namespace std;
// int sum(int a , int b){
//     int s = a + b;
//     cout<<"sum of two numbers is "<<s<<endl;
//     return 0;
// }
// int minOfTwo(int a , int b){
//     if(a<b){
//        cout<<a<<" is less then "<<b<<endl;
//     }
//      else{
//         cout<<b<<" is less then "<<a<<endl;
//     }
//     return 0;
// }
// int main(){

//     sum(4,5);
//     minOfTwo(3,4);
//     minOfTwo(9,5);

//     return 0;
//}
// int sumN(int n){
//     int sum = 0;
//     for(int i = 0 ;i<=n; i++){
//         sum += i;
//     }
//    return sum;
// }
// int main(){
//     cout<<"sum of 1 to 10 ="<< sumN(10)<<endl;
//     return 0;
// }


// int factorial(int a){
//    int f=1 ;
//    for(int i = 1; i<= a ; i++ ){
//     f *= i;
//    }
//    return f;

// }
// int main(){
    
//     cout<< "the factorial is  "<<factorial(4)<<endl;
//     return 0;
// }



// //calculate tbhe sum of the digit
// int sumOfDegit(int num){
//     int digSum = 0;
//     while(num>0){
//         int lastDigit = num%10;
//         num = num / 10;
//         digSum = digSum + lastDigit;
//     }
//     return digSum;
// }
// int main(){
    
//     cout<<"the sum of the digit are : "<<sumOfDegit(123423)<<endl;
// }

// int factorial(int a){
//    int f=1 ;
//    for(int i = 1; i<= a ; i++ ){
//     f *= i;
//    }
//    return f;
// }
//  int nCr(int a , int b ){
//     int ncr = 0;
//       ncr = factorial(a) / (factorial(b)*factorial(a -b));
//       cout<< "the factoral is : "<<ncr<<endl;
//       return 0;
//  }
// int main(){
//     nCr(5,2);
//     return 0;
// }

int main(){
    int a , b ,n;
    cout<<"enter the number of terms till you want the series"<<endl;
    cin>>n;
    a = 0;
    b =1;
 for(int i = 1; i <= n; i++) {
        cout << a << " ";

        int c = a + b;
        a = b;
        b = c;
    }
return 0;

}