#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int mx = 1e6 + 10;
const int MOD = 1e9 + 7;
using namespace std;
set<int> st;
void check()
{
    For(i,2,1020){
        int base = i + 1;
        for (int j = i*i; j <= mx; j *= i)
        {
            base += j;
            if(base >= mx)break;
            st.insert(base);
            // cout << base << nl;
        }
        // break;
    }
}
void solve()
{
    int n;
    cin >> n;
    if(st.find(n) != st.end()){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
}
int main()
{
    int t;
    cin >> t;
    check();
    while (t--)
    {
        solve();
    }
    return 0;
}