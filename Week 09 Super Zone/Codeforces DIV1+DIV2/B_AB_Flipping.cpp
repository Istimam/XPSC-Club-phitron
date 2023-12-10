#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0, k = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(s.substr(i,2) == "AB"){
            count++;
            s[i] = 'B';
            s[i + 1] = 'A';
            for (int j = i-1; j >= k; j--)
            {
                if(s.substr(j,2) == "AB"){
                    count++;
                    s[j] = 'B';
                    s[j + 1] = 'A';
                }
            }
            k = i + 1;
        }
    }
    cout << count << nl;
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