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
    int mx = INT_MIN;
    For(i,0,n){
        cin >> v[i];
        mx = max(v[i], mx);
    }
    vector<int> vv;
    For(i,0,n){
        if(v[i] == mx){
            vv.push_back(i);
        }
    }
    if(vv.size() == n){
        cout << -1 << nl;
    }
    else{
        For(i,0,vv.size())
        {
            int x = vv[i];
            if(x == 0 && v[x+1] < mx){
                cout << x + 1 << nl;
                break;
            }
            else if(x == n-1 && v[x-1] < mx){
                cout << x+1 << nl;
                break;
            }
            else{
                if(v[x+1] < mx){
                    cout <<x + 1 << nl;
                    break;
                }
                else if(v[x-1] < mx){
                    cout << x+1 << nl;
                    break;
                }
            }
        }
        // cout << "Y" << nl;
    }
    // for(auto i:vv)
    //     cout << i << ' ';
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