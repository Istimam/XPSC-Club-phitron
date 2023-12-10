#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin >> n;
    string c = "aa", d = "bb";
    int cnt = 0;
    string s;
    while (s.length() < n)
    {
        if(cnt == 0){
            s += c;
            cnt++;
        }
        else{
            s += d;
            cnt = 0;
        }
    }
    For(i,0,n){
        cout << s[i];
    }
    cout << nl;
    // int N;
    // scanf("%d", &N);
	// for (int i = 0; i < N; i++)
	// 	putchar(i & 2 ? 'b' : 'a');
	// puts("");
    return 0;
}