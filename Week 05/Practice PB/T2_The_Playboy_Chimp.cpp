#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    if(!(cin>>n))
    {
        return;
    }
    vector<int> v(n);
    For(i,0,n)
    {
        cin >> v[i];
    }
    int d;
    cin >> d;
    while (d--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int lwb = -1, upb = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if(v[mid] < x)
            {
                l = mid + 1;
                lwb = v[mid];
            }
            else if(v[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }            
        }
        l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            // cout << mid <<' '<< l << ' ' << r << nl;
            if(v[mid] > x)
            {
                upb = v[mid];
                r = mid - 1;
            }
            else if(v[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(lwb < 0)
        {
            cout << 'X' << ' ' << upb << nl;
        }
        else if(upb < 0)
        {
            cout << lwb << ' ' << 'X' << nl;
        }
        else
        cout << lwb << ' ' << upb << nl;
    }
    
    // for(auto i:v)
    //     cout << i << ' ';
    // cout << nl;
}
int main()
{
    while (!cin.eof())
    {
        solve();
    }
    return 0;
}