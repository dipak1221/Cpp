#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1(10);               //initialize 10 elements with 0
    vector<int> vec2(10, 0);            //initialize 10 elements with 0
    vector<int> vec3(10, 3);            //initialize 10 elements with 3
    vector<int> vec4 = {2, 3, 4, 5, 7}; // [)
    cout << "vec4- ";
    for (auto e : vec4)
        cout << e << ' ';
    cout << endl;
    cout << "vec3- ";
    for (auto e : vec3)
        cout << e << ' ';
    cout << endl;
    vector<int> vec4_(vec1.begin(), vec1.end());      // here it takes 2 parameter first is inclusive [ and other is exclusive )
    vector<int> vec5(vec4.begin(), vec4.end() - 2);   //{2,3,4}
    vector<int> vec6(vec4.begin(), vec4.begin() + 3); //{2,3,4}
    // for (auto e : vec5)
    //     cout << e << ' ';

    vec1.push_back(4);
    vec1.emplace_back(4); // Both are identical but emplace back will work slightly faster than push_back

    swap(vec3, vec4);
    cout << "vec4- ";
    for (auto e : vec4)
        cout << e << ' ';
    cout << endl;
    cout << "vec3- ";
    for (auto e : vec3)
        cout << e << ' ';
    cout << endl;

    return 0;
}