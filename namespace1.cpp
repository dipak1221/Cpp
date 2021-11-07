#include <bits/stdc++.h>
#include "namespacefile1.h"
#include "macro1.h"
using namespace std;

namespace dummy
{
    int k = 120;
}
// using namespace dummy;
namespace alisa = dummy;
using namespace hello;
int main()
{
    cout << alisa::k << "\n";
    cout << fun() << "\n"; // this function is in namespace this will not change the source code;
    cout << fun1();        // this is in macro will replace/ Change the actual source code

    return 0;
}