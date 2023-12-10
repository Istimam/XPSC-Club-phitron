#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if(t < 3)
    {
        cout << "GOLD" << '\n';
    }
    else if(t >= 3 && t < 6)
    {
        cout << "SILVER" << '\n';
    }
    else
    {
        cout << "BRONZE" << '\n';
    }
    return 0;
}