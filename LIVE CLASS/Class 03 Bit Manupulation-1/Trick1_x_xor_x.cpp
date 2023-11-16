#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    For(i,0,n){
        int x;
        cin >> x;
        ans ^= x;
    }
    cout << ans << nl;
    return 0;
}