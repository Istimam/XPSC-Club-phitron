#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, maxcount = 0;
    cin >> n;
    unordered_map<char, ll> likesCount;
    For(i,0,n){
        char type;
        cin >> type;
        likesCount[type]++;
        maxcount = max(maxcount, likesCount[type]);
    }
    if(maxcount>n/2){
        cout << 2 * maxcount - n << nl;
    }
    else{
        if(n%2 == 1){
            cout << 1 << nl;
        }
        else{
            cout << 0 << nl;
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