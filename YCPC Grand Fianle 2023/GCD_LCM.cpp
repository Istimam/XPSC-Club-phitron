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
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    ll sum = 0;
    For(i,0,n) {
        sum += v[i] * (n - i - 1);
    }
    cout << sum << nl;
    return 0;
}