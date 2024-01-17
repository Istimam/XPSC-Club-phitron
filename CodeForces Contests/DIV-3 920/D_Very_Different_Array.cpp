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
    ll n, m;
    cin >> n >> m;
    multiset<ll> a, b;
    For(i,0,n){
        ll x;
        cin >> x;
        a.insert(x);
    }
    For(i,0,m){
        ll x;
        cin >> x;
        b.insert(x);
    }
    ll sum = 0;
    For(i,0,n){
        ll x = *a.begin();
        ll y = *a.rbegin();
        ll z = *b.begin();
        ll t = *b.rbegin();
        ll ansx = max(abs(x - z), abs(x - t));
        ll ansy = max(abs(y - z), abs(y - t));
        if(ansx > ansy){
            sum += ansx;
            a.erase(a.begin());
            if(abs(x-z) > abs(x-t)){
                b.erase(b.begin());
            }
            else{
                b.erase(--b.end());
            }
        }
        else{
            sum += ansy;
            a.erase(--a.end());
            if(abs(y-z)>abs(y-t)){
                b.erase(b.begin());
            }
            else{
                b.erase(--b.end());
            }
        }
    }
    cout << sum << NL;
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