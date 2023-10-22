#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    For(i,0,n)
    {
        cin >> arr[i];
    }
    int s;
    cin >> s;
    map<int, int> mp;
    int sum = 0;
    For(i,0,n)
    {
        sum += arr[i];
        if(sum == s)
        {
            cout << i + 1 << '\n';
        }
        if(sum > s)
        {
            if(mp.find(sum-s) != mp.end())
            {
                cout << mp[sum - s] << " " << i << " " << i - mp[sum - s] << '\n';
            }
        }
        if(mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return 0;
}