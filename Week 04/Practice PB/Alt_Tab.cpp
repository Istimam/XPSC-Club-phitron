#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> vs(n);
    For(i,0,n)
    {
        cin >> vs[i];
    }
    reverse(vs.begin(), vs.end());
    set<string> ss;
    for (auto i:vs)
    {
        set<string>::iterator fnd = ss.find(i);
        if(fnd == ss.end())
        {
            int sz = i.size();
            string sx = i.substr(sz - 2, 2);
            ss.insert(i);
            cout << sx;
        }
    }
    return 0;
}