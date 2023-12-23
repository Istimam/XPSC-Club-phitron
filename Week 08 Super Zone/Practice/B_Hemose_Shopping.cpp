#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    if(is_sorted(v.begin(),v.end()) || n >= 2*x){
        cout << "YES" << nl;
        return;
    }
    else if(n/2){
        int dif = n - x;
        vector<int> cpy = v;
        sort(cpy.begin(), cpy.end());
        For(i,dif,n-dif){
            if(cpy[i] != v[i]){
                cout << "NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
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