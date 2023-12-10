#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    int l = 0, r = INT_MAX, mid;
    ll sum = 0;
    while (l<=r)
    {
        mid = l + (r - l) / 2;
        ll s = 0;
        For(i,0,n){
            if(v[i] > mid){
                s += v[i] - mid;
            }
        }
        if(s < m){
            r = mid - 1;
        }
        else{
            sum = mid;
            l = mid + 1;
        }
    }
    cout << sum << nl;
    return 0;
}