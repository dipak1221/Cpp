#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector can have a max size 10^7
    // if more than 10^7 values push then it will give segmentation fault
    vector<int> a;          // size 0
    vector<int> arr(10, 2); // {2,2,2,2}

    // for (long long int i = 1000000000; i < 100000000000; i++)
    // {
    //      arr.push_back(i);
    //     cout << i << endl;
    // }

    for (auto e : arr)
        cout << e << " ";
    cout << endl;
    cout << arr.size() << endl;
    arr.pop_back();
    // cout << arr.pop_back() << endl;
    for (auto e : arr)
        cout << e << " ";
    cout << setw(10) << setfill('-') << endl;
    cout << arr.size() << endl;
    arr.clear(); // erase all the elements (makes vector empty)

    cout << arr.size() << endl;
    return 0;
}