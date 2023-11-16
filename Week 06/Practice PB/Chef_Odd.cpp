#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll odd = (n / 2) + (n % 2);
    if(n >= k*2){
        odd -= k;
        if(0 > odd){
            cout << "NO" << nl;
        }
        else{
            if(odd%2 == 0)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
    }
    else{
        cout << "NO" << nl;
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