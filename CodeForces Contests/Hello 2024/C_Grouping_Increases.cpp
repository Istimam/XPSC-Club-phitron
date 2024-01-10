#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int a=1e9,b = 1e9, cnt = 0;
    for(auto& i:v){
        cin >> i;
        if(a>b)
            swap(a, b);
        if(i<=a)
            a = i;
        else if(i<=b)
            b = i;
        else
            a = i, cnt++;
}
    cout << cnt << NL;
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