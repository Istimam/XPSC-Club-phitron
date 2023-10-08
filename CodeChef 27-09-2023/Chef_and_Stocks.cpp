#include<bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // int minLoss = *min_element(arr, arr + n);
        int minLoss = INT_MAX;
        pair<int, int> p;
        p.first = INT_MAX;
        p.second = 0;
        for (int i = 0; i < n; i++)
        {
            if(p.first > arr[i])
            {
                p.first = arr[i];
                p.second = i;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(p.second == i)
            {
                continue;
            }
            sum += arr[i];
        }
        cout << sum << endl;
    } 
    return 0;
}