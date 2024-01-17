#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    For(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end(), greater<ll>());
    ll xsum = 0;
    For(i,0,x){
        xsum += v[i];
    }
    ll sum = 0, ans = 0, j = 0, cnt = 0;
    sum = accumulate(v.begin(), v.end(), sum) - xsum;
    ans = sum - xsum;
    For(i,x,n){
        sum -= v[i];
        xsum += v[i];
        xsum -= v[j++];
        cnt++;
        ans = max(ans, sum - xsum);
        if(cnt == k)break;
    }
    ll index = cnt;
    if(cnt < k){
        For(i,index,n){
            xsum -= v[i];
            ans = max(ans, -xsum);
            cnt++;
            if(cnt == k)break;
        }
    }
    if(k == n)
        ans = max(ans, (long long int)0);
    cout << ans << NL;
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