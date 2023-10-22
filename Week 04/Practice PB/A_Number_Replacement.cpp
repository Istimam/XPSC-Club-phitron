#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    For(i,0,n)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    char arr2[51] = {'\0'};
    bool ok = true;
    For(i,0,n)
    {
        if(arr2[arr[i]] != '\0')
        {
            if(arr2[arr[i]] != s[i])
            {
                ok = false;
                break;
            }
        }
        else
        {
            arr2[arr[i]] = s[i];
        }
    }
    if(ok)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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