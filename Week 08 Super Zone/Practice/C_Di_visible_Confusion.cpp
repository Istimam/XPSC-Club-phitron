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
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    if(v[0]%2 == 0){
        cout << "NO" << nl;
        return;
    }
    // bool ans = false;
    For(i,1,n){
        bool ok = false;
        For(j,2,i+3){
            if(v[i]%j != 0){
                ok = true;
                break;
            }
        }
        if(!ok){
            cout << "NO" << nl;
            return;
            // ans = false;
            // break;
        }
        // else{
        //     ans = true;
        // }
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