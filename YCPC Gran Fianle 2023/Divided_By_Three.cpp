#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int x = 0;
    For(i,0,s.size()){
        int y = s[i] - '0';
        x += y;
    }
    if(x%3 == 0){
        cout << "YES" << nl;
    }
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