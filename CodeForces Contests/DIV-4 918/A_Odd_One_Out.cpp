#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int m, n, o;
    cin >> m >> n >> o;
    map<int, int> mp;
    if(m == n){
        cout << o << nl;
    }
    else if(m == o){
        cout << n << nl;
    }
    else if(n == o){
        cout << m << nl;
    }
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
