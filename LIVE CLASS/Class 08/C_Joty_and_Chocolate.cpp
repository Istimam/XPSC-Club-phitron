#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
ll GCD(ll a,ll b)
{
    return __gcd(a, b);
}
ll LCM(ll a,ll b)
{
    return ((a / GCD(a, b)) * b);
}
int main()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll sum = 0;
    sum += ((n / a) * p);
    sum += ((n / b) * p);
    ll lcm = LCM(a, b), same;
    same = n / lcm;
    sum -= (same * (p + q));
    sum += (same * (max(p , q)));
    cout << sum << nl;
    return 0;
}