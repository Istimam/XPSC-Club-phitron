#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    FOR(i,2,(n/2)+1)
    {
        if(n%i == 0)
        {
            v.push_back(i);
        }
    }
    for(auto i:v)
    {
        cout << i << " ";
    }
    return 0;
}