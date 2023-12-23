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
    vector<int> v1(n), v2(n);
    For(i,0,n){
        cin >> v1[i];
    }
    For(i,0,n){
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    bool ok = true;
    For(i,0,n){
        if(abs(v1[i]-v2[i]) > 1 || v1[i] > v2[i]){
            ok = false;
            break;
        }
    }
    if(ok)
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