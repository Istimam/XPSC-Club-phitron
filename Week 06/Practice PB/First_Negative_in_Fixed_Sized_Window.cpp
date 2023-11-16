#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i, 0, n)
            cin >> v[i];
    int k;
    cin >> k;
    vector<int> x;
    queue<int> q;
    int i = 0, j = 0;
    while (j<n)
    {
        if(v[j] < 0){
            q.push(v[j]);
        }
        if(j >= k-1)
        {
            if(!q.empty())
            {
                if(v[i] < 0){
                    x.push_back(q.front());
                    q.pop();
                }
                else
                    x.push_back(q.front());
            }
            else 
                x.push_back(0);
            i++;
        }
        j++;
    }
    for(auto i:x)
        cout << i << ' ';
    cout << nl;
    return 0;
}
