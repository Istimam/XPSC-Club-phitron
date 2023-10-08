#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        FOR(i,0,n)
        {
            cin >> arr[i];
        }
        int mn = *min_element(arr, arr + n);
        FOR(i,0,n)
        {
            // cout << arr[i] << " ";
            arr[i] = arr[i] - mn;
        }
        int sum = 0;
        FOR(i,0,n)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}