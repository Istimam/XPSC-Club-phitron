#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    For(i, 0, n){
        cin >> v[i];
    } 
    string x = "vika";
    string ans = "";
    int k = 0;
    For(j,0,m){
        For(i,0,n){
            if(x[k] == v[i][j]){
                ans += v[i][j];
                k++;
                break;
            }
        }
    }
    if(ans == x){
        cout << "YES" << nl;
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