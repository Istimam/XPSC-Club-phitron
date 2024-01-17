#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n - 1);
    ll nsum = 0;
    For(i, 0, n-1){
        cin >> v[i];
        nsum = max(nsum, v[i]);
    } 
    if(nsum > (n*(n+1))/2){
        cout << "NO" << NL;
        return;
    }
    else if(nsum < (n*(n+1))/2){
        v.push_back((n * (n + 1)) / 2);
        set<ll> ss;
        ss.insert(v[0]);
        For(i,1,n){
            ll val = abs(v[i - 1] - v[i]);
            if(val > 0 && val <= n){
                ss.insert(val);
            }
        }
        if(ss.size() == n){
            cout << "YES" << NL;
        }
        else{
            cout << "NO" << NL;
        }
        return;
    }
        vector<ll> cnt(n + 1);
        if(v[0] > 0 && v[0] <= n)
        cnt[v[0]]++;
        ll dup = v[0];
        For(i, 1, n - 1)
        {
            ll val = abs(v[i - 1] - v[i]);
            if (val > 0 && val <= n)
            {
                cnt[val]++;
                if (cnt[val] > 1)
                {
                    dup = val;
                }
            }
            else{
                dup = val;
            }
        }
    ll ans = 0;
    For(i,1,n+1){
        if(cnt[i] == 0){
            ans += i;
        }
    }
    if(ans == dup){
        cout << "YES" << NL;
    }
    else{
        cout << "NO" << NL;
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