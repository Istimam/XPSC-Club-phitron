#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n&1 == 1){
        cout << "ODD" << nl;
    }
    else{
        cout << "EVEN" << nl;
    }
    return 0;
}