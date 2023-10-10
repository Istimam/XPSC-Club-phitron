#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    FOR(i,0,n)
    {
        cin >> arr[i];
    }
    FOR(i,0,n)
    {
        int l;
        string s;
        cin >> l >> s;
        for(auto c:s)
        {
            if(c == 'D')
            {
                if(arr[i] == 9)
                {
                    arr[i] = 0;
                }
                else
                {
                    arr[i]++;
                }
            }
            else
            {
                if(arr[i] == 0)
                {
                    arr[i] = 9;
                }
                else
                {
                    arr[i]--;
                }
            }
        }
    }
    FOR(j,0,n)
    {
        cout << arr[j] << " ";
    }
    cout << '\n';
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