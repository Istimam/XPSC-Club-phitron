// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int start = ((a + c - 1) / c) * c;
//     if (start <= b)
//     {
//         cout << start << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // int mx = max(a, b);
    int x = b / c;
    if(x*c <= b && x*c >= a)
    {
        cout << x*c << endl;
    }
    else
    {
        cout << -1;
    }
    return 0;
}