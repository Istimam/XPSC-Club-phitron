#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n, k;
    cin >> n >> k;
    int arr[n][k];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
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