// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define nl '\n'
// #define ll long long
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     For(i,0,n)
//         cin>>v[i];
//     int k;
//     cin >> k;
//     int i = 0, j = 0,s = 0,cnt = 0;
//     while (j<n)
//     {
//         s += v[j];
//         while(s > k){
//             s -= v[i];
//             i++;
//         }
//         if(s == k){
//             cnt = max(cnt, (j - i) + 1);
//         }
//         j++;
//     }
//     cout << cnt << nl;
//     return 0;
// }

/*Array that contains Negative Value*/

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
    For(i,0,n){
        cin>>v[i];
    }
    int k;
    cin >> k;
    map<int, int> mp;
    int j = 0,s = 0,cnt = 0;
    while (j<n)
    {
        s += v[j];
        if(mp.find(s) == mp.end())
        {
            mp[s] = j;
        }
        if(s == k){
            cnt = max(cnt, j + 1);
        }
        else if(mp.find(s-k) != mp.end()){
            cnt = max(cnt, j - mp[s - k]);
        }
        j++;
    }
    cout << cnt << nl;
    return 0;
}