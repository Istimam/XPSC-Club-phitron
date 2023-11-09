#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll mul = n * m;
    ll dif = mul / k;
    if(mul%k != 0)
    {
        cout << "double" << nl;
    }
    else if(dif <= INT_MAX && dif >= INT_MIN)
    {
        cout << "int" << nl;
    }
    else
    {
        cout << "long long" << nl;
    }
    return 0;
}