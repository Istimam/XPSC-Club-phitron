#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // int dif = min(v[n - 1] - v[1], v[n - 2], v[0]);
    cout << min((v[n - 1] - v[1]), (v[n - 2]- v[0])) << nl;
    return 0;
}