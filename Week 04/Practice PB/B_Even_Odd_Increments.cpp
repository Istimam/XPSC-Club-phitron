#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define ll long long
using namespace std;
void solve()
{
    int n,q;
    cin >> n >> q;
    int arr[n];
    ll sum = 0, even = 0, odd = 0;
    For(i,0,n)
    {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
            odd++;
    }
    // cout << sum << '\n';
    while (q--)
    {
        int digit, add;
        cin >> digit >> add;
        if(digit == 0)
        {
            if(add%2 == 0)
            {
                sum += even * add;
            }
            else
            {
                sum += even * add;
                odd += even;
                even = 0;
            }    
        }
        else
        {
            if(add%2 == 0)
            {
                sum += odd * add;
            }
            else
            {
                sum += odd * add;
                even += odd;
                odd = 0;
            }    
        }
        cout << sum << '\n';
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