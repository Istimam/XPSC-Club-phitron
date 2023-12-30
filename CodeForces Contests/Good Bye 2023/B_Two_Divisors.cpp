#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = gcd(a, b);
    if(a*b/x == b){
        For(i,2,i*i+1){
            if(i <= a && a%i == 0){
                cout << b * i << nl;
                return;
            }
            else if(b%i == 0){
                cout << b * i << nl;
                return;
            }
        }
        cout << b * b << nl;
    }
    else{
        cout << a * b / x << nl;
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