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
    sort(arr, arr + n);
    return 0;
}