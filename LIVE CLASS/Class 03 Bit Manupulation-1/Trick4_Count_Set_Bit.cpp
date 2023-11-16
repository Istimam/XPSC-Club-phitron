#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    while (n)
    {
        /*Bit Operation*/
        ans += n & 1;
        n >>= 1;
        /*Mathematical Approach*/
        // ans += n % 2;
        // n /= 2;
    }
    cout << ans << nl;
    return 0;
}