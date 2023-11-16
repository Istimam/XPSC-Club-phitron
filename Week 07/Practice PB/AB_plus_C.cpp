#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, a, b, c;
    cin >> n;
    if(n == 1){
        cout << -1 << nl;
    }
    else if (n == 2)
    {
        cout << "1 1 1" << nl;
    }
    else if(n%2 == 0 && n <= 1000000){

        c = 2;
        a = n-2;
        b = 1;
        cout << a << ' ' << b << ' ' << c << nl;
    }
    else if(n%2 != 0 && n < 1000000){
        c = 1;
        a = n-1;
        b = 1;
        cout << a << ' ' << b << ' ' << c << nl;
    }
    else{
        if(n%1000000 == 0){
                cout << (n / 1000000) - 1 << ' ' << 1000000 << ' ' << 1000000 << nl;
        }
        else{
            c = n % 1000000;
            a = 1000000;
            b = n / 1000000;
            cout << a << ' ' << b << ' ' << c << nl;
        }
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