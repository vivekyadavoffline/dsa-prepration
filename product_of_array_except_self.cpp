#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>ans;
    // for(int i = 0 ; i < nums.size() ; i++){
    //     int product = 1;
    //     for(int j = 0 ; j< nums.size(); j++){
    //        if( i != j) {product *= nums[j];
    //        }
           
    //     } ans.push_back(product);
    // }
    // for(int i = 0 ; i < nums.size() ; i++){
    //     int leftProduct = 1 , rightProduct = 1;
    //     if(i > i/ 2){
    //         rightProduct *= nums[i];
    //     }
    //     if(i < i/ 2){
    //         leftProduct *= nums[i];
    //     }
    //     ans.push_back(leftProduct*rightProduct);
    // }
    int n = nums.size();
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    for(int i = 1 ; i < n ; i++ ){
        prefix[i] *= nums[i-1];
     }
    for(int i = n-2 ; i >= 0 ; i-- ){
        suffix[i] *= nums[i+1];
     }

    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
 }