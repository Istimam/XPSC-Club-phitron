#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
bool isPoweOfTwo(int n)
{
    return (n > 0) && (n & (n - 1) == 0);
}
void solve()
{
    int n;
    cin >> n;
    int x = n;
    int p = 0;
    vector<int> v;
    while (x > 1)
    {
        if(x%2 == 1){
            v.push_back(n);
            // cout << n << ' ';
            n -= (1 << p);
        }
        x >>= 1;
        // if(isPoweOfTwo(x))break;
        p++;
    }
    p--;
    while (n > 0)
    {
        v.push_back(n);
        // cout << n << ' ';
        n -= (1 << p);
        p--;
    }
    cout << v.size() << NL;
    for(auto i:v)
        cout << i << ' ';
    cout << NL;
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