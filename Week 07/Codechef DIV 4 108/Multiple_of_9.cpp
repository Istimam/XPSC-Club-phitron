#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int si = 0, b = 0;
    For(i,0,n){
        if(s[i] == '?')
            si++;
        else
            b = b + (s[i] - '0');
    }
    if(s[0] == '?'){
        cout << 1;
        si--;
        while (si--)
        {
            cout << 0;
        }
        cout << nl;
    }
    else{
        if(si > 0){
            b = b % 9;
            if(b == 0){
                si--;
                while (si--)
                    cout << 1;
                cout << 2 << nl;
            }
            else{
                while (si--)
                    cout << 1;
                cout << nl;
            }
        }
        else{
            if(b%9)
                cout << 0 << nl;
            else
                cout << 1 << nl;
        }
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