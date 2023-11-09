#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
int main()
{
    int n, m, fu;
    cin >> n >> m >> fu;
    int sum = m - n;
    if(fu >= sum)
    {
        cout << "YES" << nl;
    }
    else
        cout << "NO" << nl;
    return 0;
}