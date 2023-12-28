#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x;
        cin >> x;
        float profit = (x * 20) / 100;
        float selling_num = 100.0 / profit;
        int roundNumber = static_cast<int>(ceil(selling_num));
        cout << roundNumber << endl;
        // cout << selling_num << endl;
    }
    return 0;
}