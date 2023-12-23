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
    vector<bool> v(n + 1, false);
    vector<int> vv;
    map<int, int> mp;
    bool ok = false;
    For(i, 0, n){
        int x;
        cin >> x;
        mp[x]++;
        if(x > n || mp[x] > 1){
            if(x%2 == 0){
                vv.push_back((x/2) - 1);
            }
            else{
                vv.push_back(x / 2);
            }
            ok = true;
        }
        else{
            v[x] = true;
        }
    }
    if(ok){
        int sz = vv.size();
        sort(vv.begin(), vv.end(), greater<int>());
        For(i,1,n+1){
            if(!v[i]){
                if(vv.back() < i){
                    cout << -1 << nl;
                    return;
                }
                vv.pop_back();
            }
        }
        cout << sz << nl;
    }
    else{
            cout << 0 << nl;
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