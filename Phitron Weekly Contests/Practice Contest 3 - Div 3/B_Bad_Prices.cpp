#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    For(i,0,n)
    {
        cin >> arr[i];
    }
    int mne = *min_element(arr.begin(), arr.end());
    int bad_day = 0;
    For(i,0,n)
    {
        // if(mne == arr[i])
        // {
        //     mne = *min_element(arr.begin() + i + 1, arr.end());
        //     continue;
        //     // cout << mn;
        // }
        if(arr[i] > mne )
        {
            bad_day++;
        }
    }

    cout << bad_day << '\n';
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