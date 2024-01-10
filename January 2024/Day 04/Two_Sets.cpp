#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll val = (n * (n + 1)) / 2;
    if(val%2 != 0){
        cout << "NO" << NL;
        return 0;
    }
    cout << "YES" << NL;
    val /= 2;
    set<ll> ss;
    ll sum = 0, x = n;
    while (sum < val)
    {
        if(sum+x <= val){
            ss.insert(x);
            sum += x;
        }
        x--;
    }
    cout << ss.size() << NL;
    for(auto i:ss)
        cout << i << ' ';
    cout << NL << n - ss.size() << NL;
    For(i,1,n+1){
        if(ss.find(i) == ss.end())
            cout << i << ' ';
    }
    cout << NL;
    return 0;
}
