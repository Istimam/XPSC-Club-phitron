#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int n = abs(a - b);
    int ans = 0;
    while (n)
    {
        ans += n & 1;
        n >>= 1;
    }
    cout << ans << nl;
    return 0;
}