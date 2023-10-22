#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n][n - 1];
    memset(arr, 0, sizeof(arr));
    For(i, 0, n)
    {
        For(j, 0, n-1)
        {
            cin >> arr[i][j];
            // cout << arr[i][j] << " ";
        }
        // cout << '\n';
    }
    map<int, int> mp;
    int mx = INT_MIN;
    For(i, 0, n)
    {
        mp[arr[i][0]]++;
        int x = mp[arr[i][0]];
        if (mp[arr[i][0]] > 1)
        {
            mx = arr[i][0];
            break;
        }
    }
    vector<int> v;
    v.push_back(mx);
    For(i,0,n)
    {
        For(j,0,n-1)
        {
            if(arr[i][0] != mx)
            {
                v.push_back(arr[i][j]);
            }
            else
                break;
        }
    }
    for(auto i:v)
        cout << i << " ";
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