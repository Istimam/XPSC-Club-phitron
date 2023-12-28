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
        if(abc[s[j]-'a'] == 1){
            while (true)
            {
                abc[s[i] - 'a'] = 0;
                i++;
                if(s[i-1] == s[j])break;
            }
        }
        abc[s[j] - 'a'] = 1;
        cnt = max(cnt, j - i + 1);
        j++;
    }
    cout << cnt;
    return 0;
}