#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int c;
    cin >> c;
    int ans = 0;
    if(c == 50){
        cout << 0 << nl;
    }
    else if(c > 50){
        c -= 50;
        int rc = c % 3;
        if(rc == 0){
            cout << c / 3 << nl;
        }
        else if(rc == 1){
            cout << (c / 3) + 2 << nl;
        }
        else
            cout << (c / 3) + 4 << nl;

    }
    else{
        c = 50 - c;
        if(c%2 == 0){
            cout << c / 2 << nl;
        }
        else{
            cout << (c / 2) + 3 << nl;
        }
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