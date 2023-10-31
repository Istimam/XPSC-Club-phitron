#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if(a == b)
    {
        cout << "YES" << '\n';
    }
    else
    {
        int mx = max(a, b);
        For(i,0,mx)
        {
            if(a == b)
            {
                cout << "YES" << '\n';
                return;
            }
            if(a > b)
            {
                a--;
                b++;
            }
            else
            {
                b--;
                a = a + 3;
            }
        }
        cout << "NO" << '\n';
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