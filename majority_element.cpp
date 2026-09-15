#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
// int main(){
//     // vector<int>v;
//     // int n =4;
//     // int arr[n]={4,5,3,5};
//     // for(int i = 0 ; i <n ; i++){
//     //     for(int j = i+ 1 ; j <n ; j++){
//     //         if( arr[i] + arr [j] == 10){
//     //             v.push_back(i);
//     //             v.push_back(j);
//     //            break ;
//     //         }
//     //     }
//     // }
//     // for( int x : v ){
//     //     cout<<x<<" "<<endl;
//     // }
    
//     vector<int>v = { 2,3,4,-5,4,3,5,9};
//     vector<int>ans;
//     sort(v.begin(), v.end());
//     int n = v.size();
//     int i = 0;
//     int j=n-1;
//     int target = 11 ;
//     int parSum = 0;
//     while(i  < j ){
//         if(parSum > target){
//             parSum = v[i]+v[j];
//             j--;
//         }
//         else if( parSum < target){
//              parSum = v[i]+v[j];
//             i++;
//         }
//         else if( parSum =target){
//             ans.push_back(i);
//             ans.push_back(j);
//             break;
//         }
//     }
//    cout << "Sorted array: ";
// for(int x : v) cout << x << " ";

// cout << "\nIndices for sum 11: ";
// for(int x : ans) cout << x << " ";
//     return 0;
// }
// vector<int>pairSum(vector<int>nums,  int target){
//     vector<int>ans;
//     int n = nums.size();
//     int i = 0 , j  = n - 1;
//     while( i < j ){
//         int pairSum = nums[i ]+ nums [ j];
//         if( pairSum > target){
//             j--;
//         }
//         if( pairSum < target){
//             i++;
//         }
//         if( pairSum ==  target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }

//     }
// }
// int main(){
//     vector<int>nums = {0,1,2,3,4,5,6,7,8,9};
//     int target = 15;
//     vector<int> ans = pairSum(nums , target);
//     cout<<ans[0]<< " , "<<ans[1]<<endl;
//     return 0;
// }
//  class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int val : nums){
//             int  freq = 0;
//             for(int el : nums){
//                 if( el == val ){
//                     freq++;
//                 }
//             }
//             if( freq > n/2 ){
//                 return val;
//             }
//         }
//          return -1;
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         int n = nums.size();

//         sort(nums.begin(), nums.end());

//         int freq = 1;
//         int ans = nums[0];

//         for(int i = 1; i < n; i++) {

//             if(nums[i] == nums[i-1]) {
//                 freq++;
//             }
//             else {
//                 freq = 1;
//                 ans = nums[i];
//             }

//             if(freq > n/2) {
//                 return ans;
//             }
//         }

//         return ans;
//     }
// };