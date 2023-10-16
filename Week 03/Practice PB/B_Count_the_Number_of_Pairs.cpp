#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n, k;
    cin >> n >> k;
    int ARR[26] = {0}, arr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if(c >= 'a' && c <= 'z')
        {
            arr[c - 'a']++;
        }
        else
        {
            ARR[c - 'A']++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i] != 0 || ARR[i] != 0)
        {
            if(arr[i] <= ARR[i])
            {
                cnt += arr[i];
                ARR[i] = ARR[i] - arr[i];
                arr[i] = arr[i] - arr[i];
            }
            else
            {
                cnt += ARR[i];
                arr[i] = arr[i] - ARR[i];
                ARR[i] = ARR[i] - ARR[i];
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        while (arr[i] > 1 && k != 0)
        {
            cnt++;
            arr[i] -= 2;
            k--;
        }
        while (ARR[i] > 1 && k != 0)
        {
            cnt++;
            ARR[i] -= 2;
            k--;
        }
        
    }
    
    
    cout << cnt << '\n';
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