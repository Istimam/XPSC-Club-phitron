#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    string S;
    cin >> S;
    int i = 0;
    int cnt = 0;
    while (S[i] != 'W')
    {
        cnt++;
    }
    cout << cnt;
    return 0;
}