// #include<bits/stdc++.h>
// #define FOR(i,A,b) for(int i = (A); i < (b); i++)
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int b = 0, r = 0, w = 0;
//     bool ok = false;
//     for(auto c:s)
//     {
//         if(c == 'B')
//         {
//             b++;
//         }
//         else if(c == 'R')
//         {
//             r++;
//         }
//         else
//         {
//             w++;
//             if(b != 0 || r != 0)
//             {
//                 bool fnd = true;
//                 if(b == 0 || r == 0)
//                 {
//                     fnd = false;
//                     cout << "NO" << '\n';
//                     return;
//                 }
//                 ok = fnd || ok;
//                 b = 0;
//                 r = 0;
//             }
//         }
//     }
//     if(b != 0 || r != 0)
//     {
//         bool fnd = true;
//         if(b == 0 || r == 0)
//         {
//             fnd = false;
//             cout << "NO" << '\n';
//             return;
//         }
//         ok = ok || fnd;
//         b = 0;
//         r = 0;
//     }
//     if(ok || w == n)
//         cout << "YES" << '\n';
//     else
//         cout << "NO" << '\n';
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

/*By Phitron*/
#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, r = 0, b = 0, w = 0;
    bool ok = false;
    while (i<n)
    {
        r += (s[i] == 'R'); // if(s[i] == 'R)
        b += (s[i] == 'B');
        w += (s[i] == 'W');
        if(w)
        {
            ok |= ((r == 0 && b == 0) || (r >= 1 && b >= 1));
            // ok = (ok | ((r == 0 && b == 0) || (r >= 1 && b >= 1)));
            if(!ok)
                break;
            if(i < n-1)
                ok = false;
            w = 0, r = 0, b = 0;
        }
        i++;
    }
    ok |= ((r == 0 && b == 0) || (r >= 1 && b >= 1));
    if(ok)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}