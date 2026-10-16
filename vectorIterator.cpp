#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int>:: iterator itr;
    for( itr = vec.begin() ; itr != vec.end() ; itr++){
        cout<< *(itr) << " ";
    }
    cout<<endl;
    return 0;
}