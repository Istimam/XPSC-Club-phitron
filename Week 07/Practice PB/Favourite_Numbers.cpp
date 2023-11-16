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
    if(n%2 == 0 && n%7 == 0){
        cout << "Alice" << nl;
    }
    else if(n%2 != 0 && n%9 == 0){
        cout << "Bob" << nl;
    }
    else {
        cout << "Charlie" << nl;
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