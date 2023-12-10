#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int w,h;
    cin >> w >> h;
    int chefW = 60, chefH = 130;
    if(chefW <= w){
        if(chefH >= h)
        {
            cout << "YES" << nl;
        }
        else
        cout << "NO" << nl;
    }
    else
        cout << "NO" << nl;
    return 0;
}