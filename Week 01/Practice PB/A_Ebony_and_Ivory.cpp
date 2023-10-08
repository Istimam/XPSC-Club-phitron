#include<bits/stdc++.h>
#define FOR(i,A,B) for(int i = (A); i < (B); i++)
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;   
    bool found = false;
    FOR(i,0,10001)
    {
        int x = i * a;
        FOR(j,0,10001)
        {
            int y = j * b;
            if(c == x+y)
            {
                found = true;
                break;
            }
        }
    }
    if(found)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

