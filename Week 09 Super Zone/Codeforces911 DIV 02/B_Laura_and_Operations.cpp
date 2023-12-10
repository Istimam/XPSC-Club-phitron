#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(abs(b-c)%2 == 0){
        cout << 1 << ' ';
    }
    else{
        cout << 0 << ' ';
    }
    if(abs(a-c)%2 == 0){
        cout << 1 << ' ';
    }
    else{
        cout << 0 << ' ';
    }
    if(abs(a-b)%2 == 0){
        cout << 1 << nl;
    }
    else{
        cout << 0 << nl;
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