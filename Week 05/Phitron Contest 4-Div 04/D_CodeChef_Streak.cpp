#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> addy(n), om(n);
    For(i,0,n)
    {
        cin >> addy[i];
    }
    For(i,0,n)
    {
        cin >> om[i];
    }
    int j = 0,cnt=0, sz = n;
    int ady = 0;
    For(i,0,n)
    {
        if(addy[i] == 0)
        {
            ady = max(ady, cnt);
            cnt = 0;
        }
        else
        cnt++;
    }
    ady = max(ady, cnt);
    int omm = 0, cntt = 0;
    For(i,0,n)
    {
        if(om[i] == 0)
        {
            omm = max(omm, cntt);
            cntt = 0;
        }
        else
        cntt++;
    }
    omm = max(omm, cntt);
    if(ady == omm)
    {
        cout << "Draw" << '\n';
    }
    else if(ady < omm)
    {
        cout << "Addy" << '\n';
    }
    else
        cout << "Om" << '\n';

    // cout << ady << ' ' << omm << '\n';
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