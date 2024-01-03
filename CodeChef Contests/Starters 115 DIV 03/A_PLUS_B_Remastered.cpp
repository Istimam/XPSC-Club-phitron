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
    vector<int> v(n), v2(n);
    For(i, 0, n) cin >> v[i];
    For(i, 0, n) cin >> v2[i];
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end(), greater<int>());
    int val = v[0] + v2[0];
    bool ans = true;
    For(i,1,n){
        if(v[i] + v2[i] != val){
            ans = false;
            break;
        } 
    }
    if(ans){
        For(i,0,n){
            cout << v[i] << ' ';
        }
        cout << nl;
        For(i,0,n){
            cout << v2[i] << ' ';
        }
        cout << nl;
        return;
    }
    sort(v2.begin(), v2.end());
    val = v[0] + v2[0];
    bool ok = true;
    For(i,1,n){
        if(v[i] + v2[i] != val){
            ok = false;
            break;
        } 
    }
    if(ok){
        For(i,0,n){
            cout << v[i] << ' ';
        }
        cout << nl;
        For(i,0,n){
            cout << v2[i] << ' ';
        }
        cout << nl;
        return;
    }
    cout << -1 << nl;
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