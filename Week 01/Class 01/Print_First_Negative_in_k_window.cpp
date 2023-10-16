#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    For(i,0,n)
    {
        cin >> ar[i];
    }
    int k;
    cin >> k;
    int i = 0, j = 0;
    queue<int> qq;
    while (j<n)
    {
        if(ar[j] < 0)
        {
            qq.push(ar[j]);
        }
        if(j >= k-1)
        {
            if(ar[i] < 0)
            {
                cout << qq.front() << '\n';
                qq.pop();
                // i++;
            }
            else if(qq.empty())
            {
                cout << 0 << '\n';
                // i++;
            }
            else
            {
                cout << qq.front() << '\n';
                // i++;
            }
            i++;
        }
        j++;
    }
    return 0;
}