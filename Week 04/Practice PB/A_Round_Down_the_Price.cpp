#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int i = 0;
    while (i<10)
    {
        double power = pow(10, i);
        if(n < power)
        {
            int x = n - pow(10, i - 1);
            cout << x << '\n';
            break;
        }
        else if(n==power)
        {
            int x = n - pow(10, i);
            cout << x << '\n';
            break;        
        }
        i++;
    }
    
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