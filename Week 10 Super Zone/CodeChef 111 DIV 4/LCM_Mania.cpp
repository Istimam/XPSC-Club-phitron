#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n < 3)
        cout << -1 << nl;
    else{
        int a, b, c;
        if(n%3 == 0){
            a = n, b = n, c = n;
        }
        else{
            a = (n / 3) + 1;
            b = a;
            c = n / 3;
        }
        cout << a << ' ' << b << ' ' << c << nl;
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