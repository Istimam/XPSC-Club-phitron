#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    int zero = 0, one = 0, cnt = 0;
    For(i,0,n){
        if(s1[i] != s2[i]){
            cnt++;
            if(s1[i] == '0'){
                zero++;
            }
            else{
                one++;
            }
        }
    }
    cout << cnt - min(zero, one) << NL;
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