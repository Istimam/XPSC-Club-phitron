#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int p1,p2;
    cin >> p1 >> p2;
    int t1, t2;
    cin >> t1 >> t2;
    int x = (p1 * t1) + (p2 * t2);
    cout << x << '\n';
    return 0;
}