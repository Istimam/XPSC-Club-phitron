#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string chef, shefi;
    cin >> chef >> shefi;
    int chefCnt = 0, ShefiCnt = 0;
    For(i,0,n)
    {
        // cout << chef[i] << ' ' << shefi[i] << nl;
        if(chef[i] == shefi[i])
        {
            continue;
        }
        if((chef[i] == 'R' && shefi[i] == 'S') || (chef[i] == 'S' && shefi[i] == 'P') || (chef[i] == 'P' && shefi[i] == 'R'))
        {
            chefCnt++;
        }
        else
            ShefiCnt++;
    }

    // cout << chefCnt << ' ' << ShefiCnt << nl;
    int cnt = 0;
    while (chefCnt <= ShefiCnt)
    {
        cnt++;
        chefCnt++;
        ShefiCnt--;
    }
    cout << cnt << nl;
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