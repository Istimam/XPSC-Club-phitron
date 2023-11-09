#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int GCD = __gcd(a, b);
    int LCM = (a * b) / GCD; /*Chances of Overflow*/
    int LCM = (a / GCD) * b;
    cout << GCD << ' ' << LCM << nl;
    return 0;
}