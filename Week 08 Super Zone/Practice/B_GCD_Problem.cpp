#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if((n&1)==0){
        int a = n - 3;
        int b = 2;
        cout << a << ' ' << b << ' ' << 1 << nl;
    }
    else{
        int div = (n - 1) / 2;
        if((div&1) == 0)
            cout << div - 1 << ' ' << div + 1 << ' ' << 1 << nl;
        else
            cout << div - 2 << ' ' << div + 2 << ' ' << 1 << nl;
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