#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    map<ll, int> mp;
    mp[0]++;
    ll j = 0, s = 0, cnt = 0;
    while (j<n)
    {
        s += v[j];
        cnt += mp[s - k];
        mp[s]++;
        // if(s == k){
        //     cnt = max(cnt, j + 1);
        //     cnt++;
        // }
        // if(mp.find(s-k) != mp.end()){
        //     cnt = max(cnt, j - mp[s - k]);
        //     cnt++;
        // }
        // if(mp.find(s) == mp.end()){
        //     mp[s] = j;
        // }
        j++;
    }
    cout << cnt << nl;
    return 0;
}