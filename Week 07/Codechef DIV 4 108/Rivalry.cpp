#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int r1, r2, d1, d2;
    cin >> r1 >> r2;
    cin >> d1 >> d2;

    int dif1 = (d1 + r1);
    int dif2 = (d2 + r2);
    if(dif1 > dif2){
        cout << "Dominater" << nl;
    }
    else
        cout << "Everule" << nl;
    // cout << dif1 << ' ' << dif2 << nl;
    return 0;
}