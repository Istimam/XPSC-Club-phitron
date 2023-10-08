#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    long long odd = LONG_MAX;
    long long sum = 0;
    int arr[t];
    for (int i = 0; i < t;i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < t; i++)
        {
            if(arr[i] % 2 == 1 && arr[i]  < odd)
            {
                odd = arr[i];
            }
        }
        cout << sum - odd;
    }
    return 0;
}