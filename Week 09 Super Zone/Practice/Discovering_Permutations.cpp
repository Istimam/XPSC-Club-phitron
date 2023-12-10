#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for (int k = 1; k <= t;k++)
    {
        cout << "Case " << k << ':' << '\n';
        int n, r;
        cin >> n >> r;
        string str = "";
        char c = 'A';
        for (int i = 0; i < n; i++)
        {
            str += c;
            c++;
        }
        map<string, int> mp;
        for (int i = 0; i < r;i++){
            mp[str]++;
            if(mp[str] > 1){
                break;
            }
            cout << str << '\n';
            next_permutation(str.begin(), str.end());
        }
    }
	return 0; 
} 