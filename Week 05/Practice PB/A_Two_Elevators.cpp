// #include<bits/stdc++.h>
// #define For(i,A,B) for(ll i = A; i < B; i++)
// using namespace std;
// void solve()
// {
//     int a,b,c;
//     cin >> a >> b >> c;
//     if(c == 1)
//     {
//         int x = abs(a - 1);
//         b = b - c;
//         if(x < b)
//         {
//             cout << 1 << '\n';
//         }
//         else if(x > b)
//         {
//             cout << 2 << '\n';
//         }
//         else
//         {
//             cout << 3 << '\n';
//         }
//     }
//     else
//     {
//         int x = a - 1;
//         b = abs(b - c);
//         c = c - 1;
//         b += c;
//         if(x < b)
//         {
//             cout << 1 << '\n';
//         }
//         else if(x > b)
//         {
//             cout << 2 << '\n';
//         }
//         else
//         {
//             cout << 3 << '\n';
//         }
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d1 = a - 1;
        int d2 = abs(b - c) + c - 1;
        int ans = 0;
        if (d1 <= d2) 
        {
            ans += 1;
        }
        if (d1 >= d2) 
        {
            ans += 2;
        }
        cout << ans << std::endl;
    }
    return 0;
}
