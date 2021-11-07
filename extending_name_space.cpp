#include <bits/stdc++.h>
using namespace std;
namespace one
{
    int a = 12;
}
namespace one // this means extending 
{
    int b = 13;
}
int main()
{
    cout << one::a << " " << one::b;

    return 0;
}