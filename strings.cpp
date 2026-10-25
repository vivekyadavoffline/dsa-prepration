#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[] = {'a', 'b', 'c', '\0'};
    cout << strlen(str) << endl;
    char str1[100];
    cin >> str1;
    cout << strlen(str1) << endl;
    char str2[100];
    cin.ignore();
    cin.getline(str2, 100);
    cout << str2 << endl;
    return 0;
}