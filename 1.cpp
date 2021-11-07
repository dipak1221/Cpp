#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "1";
    for (int i = 2; i <= 10; i++)
    {
        cout << setw(20) << setfill(' ');
        cout << s << "\n";
        s += " " + to_string(i);
    }
    return 0;
}
