#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, targetSum;
        cin >> n >> targetSum;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int pos = 0;
        int neg = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0)
            {
                pos++;
            }
            else
                neg++;
        }
        cout << pos << " " << neg << endl;
    }
    
    return 0;
}