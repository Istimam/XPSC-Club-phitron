#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        string s2 = "314159265358979323846264338327";
        For(i,0,30)
        {
            if(s[i] != s2[i])
            {
                break;
            }
            else
                cnt++;
        }
        cout << cnt << '\n';
    }
    
    return 0;
}