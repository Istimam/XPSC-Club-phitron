#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool srt = true;
    For(i,0,n)
    {
        cin >> v[i];
        if(i > 0 && v[i-1] >= v[i])
        {
            srt = false;
        }
    }
    if(!srt)
    {
        int cnt = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if(v[i] >= v[i+1])
            {
                while (v[i] >= v[i+1])
                {
                // cout << v[i]<<' ';
                    v[i] /= 2;
                    cnt++;
                    if(v[i] == 0)
                    {
                        break;
                    }
                }        
            }
        }
        For(i,0,n-1)
        {
            if(v[i] >= v[i+1])
            {
                srt = false;
                break;
            }
            srt = true;
        }
        if(srt)
            cout << cnt << nl;
        else
            cout << -1 << nl;
    }
    else 
        cout << 0 << nl;

        // if(srt)
        // cout << 'T' << nl;
        // else
        // cout << 'F' << nl;

    
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