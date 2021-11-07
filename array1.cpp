#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {5, 5, 5, 5, 6, 6, 7, 6, 6, 7};
    array<int, 10> arr1;
    arr1.fill(23);
    memset(arr + 6, -1, sizeof(arr));
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << arr1.at(3);
    cout << endl;
    array<int, 5> arr2 = {4, 5, 6, 7, 78};
    for (auto it = arr2.begin(); it != arr2.end(); it++)
    {
        cout << *it << " - ";
    }
    cout << endl;

    // arr.begin() this will not work beacause arr is declare using primitive way
    // begin(),end(),rbegin(),rend() this will work only with containers like array ,vector ,map

    for (int i = 0; i < 10; i++)
    {
        cout << *(arr + i) << " - ";
    }
    // here *(arr+i)  will work only with primitive type not with container type
    cout << endl;

    //reverse order
    for (auto it = arr2.rbegin(); it != arr2.rend(); it++)
        cout << *it << " , ";
    cout << endl;

    //reverse using begin() and end()
    for (auto it = arr2.end() - 1; it >= arr2.begin(); it--)
        cout << *it << "   ";
    cout << endl;

    //forward order using rbegin() and rend()
    for (auto it = arr2.rend() - 1; it >= arr2.rbegin(); it--)
        cout << *it << " ; ";

    cout << endl;

    // this is for each loop
    // always in forward direction
    // here e is not pointing to first element like above it was but here e is the first element itself

    for (auto e : arr2)
    {
        cout << e << ' ';
    }

    cout << endl;
    string s = "1234567890";
    for (auto e : s)
        cout << e << ' ';

    cout << endl;

    cout << arr2.size() << endl;

    cout << arr2.front() << endl;
    cout << arr2.back() << endl;

    int a[1000000]; // inside main 10^6 can be range of int,char,double
    // outside main it is 10^7

    bool a[10000000]; // inside main 10^7 can be range
    // outside main it is 10^8
    
    // char, byte, boolean = 1byte
    // short, unsigned int = 2byte
    // int ,float,long= 4byte
    // double , long long ,int_64 =8byte
    // long double = 10byte
    
    return 0;
}

int a[10000000];   // 10^7
bool a[100000000]; // 10^8