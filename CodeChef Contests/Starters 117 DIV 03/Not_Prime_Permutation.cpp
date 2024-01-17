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
    int n;
    cin >> n;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    if(n <= 2){
        cout << -1 << NL;
    }
    else{
        auto pos1 = find(v.begin(), v.end(), 1);
        auto pos3 = find(v.begin(), v.end(), 3);
        swap(*pos1, *pos3);
        for(int i:v)
            cout << i << ' ';
        cout << NL;
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