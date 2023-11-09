#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n <= 10)
    {
        cout << "Lower Double" << nl;
    }
    else if(n <= 15 && n >= 11)
    {
        cout << "Lower Single" << nl;
    }
    else if(n <= 25 && n >= 16)
    {
        cout << "Upper Double" << nl;
    }
    else
        cout << "Upper Single" << nl;
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