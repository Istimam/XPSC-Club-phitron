#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = 0;
    FOR(i,0,n)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    map<int, int> countMap;
    FOR(i,0,n)
    {
        countMap[arr[i]]++;
    }
    int num = 0, num2 = 0;
    int mx1 = 0;
    for(auto i:countMap)
    {
        int num = i.first;
        int occ = i.second;
        if(occ==2)
        {
            num++;
            mx1 = max(mx1, num);
        }
        else
            num2++;
    }
    if(num2 == 0)
    {
        cout << mx1 << " " << mx1;
    }
    else
    {
        cout << mx << " " << mx1 * 2;
    }
    return 0;
}