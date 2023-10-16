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
    int sum;
    cin >> sum;

    int i = 0, j = 0, s = 0;
    int window = 0;
    while (j<n)
    {
        s += arr[j];
        if(s > sum)
        {
            s -= arr[i];
            i++;
        }
        if(s == sum)
        {
            int dif = (j - i) + 1;
            window = max(window, dif);
        }
        j++;
    }
    cout << window << '\n';
    return 0;
}