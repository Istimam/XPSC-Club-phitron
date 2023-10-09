#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum;
        cin >> sum;
        bool exist = false;
        for (int x = 1; x <= sum / 3; ++x) 
        {
            for (int y = x + 1; y <= sum / 2; ++y) 
            {
                int z = sum - x - y;
                if (z > y) {
                    if(x%3 == 0 || y%3 == 0 || z%3 == 0)
                    {
                        continue;
                    }
                    else
                    {
                        cout << "YES" << '\n';
                        cout << x << " " << y << " " << z << '\n';
                        exist = true;
                        break;
                    }
                }
            }
            if(exist)
            break;
        }
        if(!exist)
        cout << "NO" << '\n';
    }    
    return 0;
}
