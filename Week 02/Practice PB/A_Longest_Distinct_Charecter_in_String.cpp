#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, j = 0, cnt = 0;
    int abc[26] = {0};
    while (j < s.size())
    {
        abc[s[j] - 'a']++;
        if(abc[s[j] - 'a'] > 1)
        {
            int d = j - i;
            cnt = max(cnt, d);
            while(i != j)
            {
                abc[s[i] - 'a']--;
                i++;
            }
        }
        j++;
    }
    cout << cnt;
    return 0;
}