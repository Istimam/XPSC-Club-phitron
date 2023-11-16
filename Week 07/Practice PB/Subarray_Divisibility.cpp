#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    vector<int> v(n, 0);
    For(i,0,n){
        int x;
        cin >> x;
        v[i] += x;
    }
    map<ll, int> mp;
    mp[0]++;
    ll j = 0, s = 0, cnt = 0;
    while (j<n)
    {
        s += v[j];
        cnt += mp[s - k];
        mp[s]++;
        j++;
    }
    cout << cnt << nl;
    return 0;
}