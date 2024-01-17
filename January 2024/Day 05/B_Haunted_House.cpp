// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define NL '\n'
// #define ll long long
// #define YES cout<< "YES"<<NL;
// #define NO cout<< "NO" <<NL;
// const int MOD = 1e9 + 7;
// using namespace std;
// void solve()
// {
//     int n;
//     string s;
//     cin >> n >> s;
//     reverse(s.begin(), s.end());
//     vector<ll> v, v2(n, -1);
//     For(i,0,n){
//         if(s[i] == '0'){
//             v.push_back(i - v.size());
//         }
//     }
//     For(i,0,v.size()){
//         if(i==0)
//             v2[i] = v[i];
//         else{
//             v2[i] = v[i] + v2[i - 1];
//         }
//     }
//     For(i,0,n){
//         cout << v2[i] << ' ';
//     }
//     cout << NL;
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
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    set<int> ss;
    For(i,0,n){
        if(s[i] == '0')
            ss.insert(i);
    }
    ll ans = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i] == '1'){
            if(ans == -1 || ss.empty())
                ans = -1;
            else{
                ans += i - *ss.rbegin();
                s[*ss.rbegin()] = '1';
                ss.erase(--ss.end());
            }
        }
        else if(!ss.empty() && *ss.rbegin() == i){
            // cout <<ss.size()<<' '<<i<<' '<< *ss.rbegin() << ' ';
            ss.erase(i);
        }
        cout << ans << ' ';
    }
    cout << NL;
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