#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
bool notEqual(int x, int y) {
    return (x & 1) != (y & 1);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    int j = 1;
    int ans = v[0];
    int sum = v[0];
    while (j<n)
    {
        if(notEqual(v[j-1],v[j])){
            sum += v[j];
        }
        else{
            sum = v[j];
        }
        if(v[j] > sum){
            sum = v[j];
        }
        ans = max(sum, ans);
        j++;
    }
    cout << ans << nl;
    // {
    //     if(notEqual(v[j-1],v[j])){
    //         sum += v[j];
    //     }
    //     else{
    //         ans = max(max(sum, ans), v[j]);
    //         sum = v[j];
    //     }
    //     j++;
    // }
    // ans = max(sum, ans);
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