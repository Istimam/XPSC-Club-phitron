#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int dif = abs(n - m);
    if(n == 0 && m == 0)
    {
        cout << "NO" << nl;
        return 0;
    }
    if(dif < 2)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
    return 0;
}
