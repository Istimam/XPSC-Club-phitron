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
        int maxx = INT_MIN;
        int maxIndex = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > maxx)
            {
                maxx = arr[i];
                maxIndex = i;
            }
        }
        int minn = INT_MIN;
        int minIndex = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > minn && arr[i] < maxx)
            {
                minn = arr[i];
                minIndex = i;
            }
        }
        if(maxIndex > minIndex)
        {
            cout << minIndex << " " << maxIndex << endl;
        }
        else
        {
            cout << maxIndex << " " << minIndex << endl;
        }
    }
    
    return 0;
}