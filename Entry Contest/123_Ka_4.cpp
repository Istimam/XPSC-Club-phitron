#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x > 1)
    {   
        for (int i = 1; i <= x; i++)
        {
            cout << i;
        }
        cout << endl;
        for (int i = 2; i < x; i++)
        {
            cout << i;
            for (int j = 2; j < x; j++)
            {
                cout << " ";
            }
            cout << x << endl;
        }
        // cout << endl;
        for (int i = 0; i < x; i++)
        {
            cout << x;
        }
    }
    else
    {
        cout << "1";
    }
    return 0;
}