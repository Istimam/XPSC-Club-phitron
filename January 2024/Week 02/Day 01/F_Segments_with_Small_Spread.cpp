#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES" <<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    multiset<ll> ms;
    ll i = 0, j = 0, cnt = 0, mn = LLONG_MAX, mx = LLONG_MIN;
    while (j < n)
    {
        ms.insert(v[j]);
        mn = *ms.begin();
        mx = *ms.rbegin();
        ll dif = mx - mn;
        while(dif > k){
            auto fnd = ms.find(v[i]);
            ms.erase(fnd);
            i++;
            mn = *ms.begin();
            mx = *ms.rbegin();
            dif = mx - mn;
        }
        // cout << j << '-' << i <<"->"<<(j - i) + 1<< NL;
        cnt += (j - i) + 1;
        j++;
    }
    cout << cnt << NL;
    return 0;
}