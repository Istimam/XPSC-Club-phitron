#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int odd = 0, even = 0;
    For(i,0,n)
    {
        cin >> arr[i];
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
            odd++;
    }
    if(n == odd || n == even)
    {
        cout << "YES" << '\n';
    }
    else
    {
        int mn = *min_element(arr.begin(), arr.end());
        if(mn%2 != 0)
        {
            cout << "YES" << '\n';
        }
        else
        cout << "NO" << '\n';
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