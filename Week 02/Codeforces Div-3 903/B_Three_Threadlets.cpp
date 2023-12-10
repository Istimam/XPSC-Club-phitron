// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define nl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// using namespace std;
// bool compare(int a,int b,int c)
// {
//     if(b > c && c*2+c == a && c*2 == b){
//         return true;
//     }
//     else if(b < c && b*2+b == a && b*2 == c){
//         return true;
//     }
//     return false;
// }
// void solve()
// {
//     map<int, int> mp;
//     For(i,0,3){
//         int x;
//         cin >> x;
//         mp[x]++;
//     }
//     bool ans = false;
//     if(mp.size() == 1){
//         ans = true;
//     }
//     else if(mp.size() == 2){
//         int a, b;
//         for(auto i:mp){
//             if(i.second == 2){
//                 a = i.first;
//             }
//             else
//                 b = i.first;
//         }
//         if(a > b && a == b*2){
//             ans = true;
//         }
//         else if(a*4 >= b && b%a == 0){
//             ans = true;
//         }
//     }
//     else{
//         int a, b, c, j = 0;
//         for(auto i:mp){
//             if(j == 0)
//                 a = i.first;
//             else if(j == 1)
//                 b = i.first;
//             else
//                 c = i.first;
//             j++;
//         }
//         if(a > b && a > c){
//             ans = compare(a, b, c);
//         }
//         else if(b > a && b > c){
//             ans = compare(b, a, c);
//         }
//         else{
//             ans = compare(c, a, b);
//         }
//     }
//     if(ans)
//         cout << "YES" << nl;
//     else
//         cout << "NO" << nl;
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
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min({a, b, c});
    bool ans = true;
    if(a%mn != 0 && b%mn != 0 && c%mn !=0)
        ans = false;
    int cnt = 0;
    while (a != mn)
    {
        if(cnt > 3 || a%mn != 0){
            ans = false;
            break;
        }
        a -= mn;
        cnt++;
    }
    while (b != mn)
    {
        if(cnt > 3 || b%mn != 0){
            ans = false;
            break;
        }
        b -= mn;
        cnt++;
    }
    while (c != mn)
    {
        if(cnt > 3 || c%mn != 0){
            ans = false;
            break;
        }
        c -= mn;
        cnt++;
    }
    if(cnt <= 3 && ans)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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