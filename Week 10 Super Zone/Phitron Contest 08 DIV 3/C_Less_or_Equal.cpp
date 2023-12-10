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
    set<int> ss;
    map<int, int> mp;
    For(i,0,n){
        int x;
        cin >> x;
        mp[x]++;
        ss.insert(x);
    }
    if(k == 0){
        if(ss.find(1) == ss.end())
        {
            cout << 1 << nl;
            return 0;
        }
    }
    int cnt = 0, val;
    for(auto i:ss){
        cnt += mp[i];
        val = i;
        if(cnt >= k){
            break;
        }
    }
    if(cnt == k){
        cout << val << nl;
    }
    else{
        cout << -1 << nl;
    }
    return 0;
}