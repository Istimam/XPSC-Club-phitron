#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, b, g;
    cin >> n >> b >> g;
    // int boyg = b / g;
    int remBoy = b % g;
    int remGirl = (n - b) % g;
    int remStd = min(remBoy, remGirl);
    remBoy -= remStd;
    remGirl -= remStd;
    cout << max(remBoy, remGirl) << nl;
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