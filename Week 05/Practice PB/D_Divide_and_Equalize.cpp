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
    int l = 0, r = INT_MAX;
    bool fans = false;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        double ans = 1.0;
        For(i,0,n){
            ans *= (v[i] * 1.0 / mid);
        }
        if(fabs(ans-1.0) < 1e-15)
        {
            fans = true;
            break;
        }
        else if(ans > 1.0){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    if(fans){
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