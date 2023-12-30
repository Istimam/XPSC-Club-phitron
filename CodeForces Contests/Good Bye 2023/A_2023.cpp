#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int sum = 1;
    For(i, 0, n) {
        cin >> v[i];
        sum *= v[i];
    }
    if(2023%sum != 0){
        cout << "NO" << nl;
    }
    else{
        cout << "YES" << nl;
        int x = 2023 / sum;
        cout << x << ' ';
        k--;
        while (k--)
        {
            cout << 1 << ' ';
        }
        cout << nl;
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