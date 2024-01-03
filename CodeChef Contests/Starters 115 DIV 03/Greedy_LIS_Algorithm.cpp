#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    if (x == 0) {
        For(i,1,n+1){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    if (n - x <= 1) {
        cout << "-1" << endl;
        return;
    }
    int ad = n - 1 - x;
    x = n + 1 - ad;
    cout << x << " ";
    int xx = 1;
    For(j,1,n) {
        if (j == x) {
            xx++;
        }
        cout << xx << " ";
        xx++;
    }
    cout << endl;
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