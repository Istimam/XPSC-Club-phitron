#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    // for(auto i:v)
    //     cout << i << ' ';
    int i = 0, j = 0, cnt = 0,sum = 0;
    while (j<n)
    {
        sum += v[j];
        if(sum%n == 0){
            cnt++;
            sum -= v[i];
            i++;
        }
        else if(sum > n){
            while(sum > n){
                sum -= v[i];
                if(sum%n == 0)
                {
                    cnt++;
                }
                i++;
            }
        }
        j++;
    }
    cout << cnt << nl;
    return 0;
}