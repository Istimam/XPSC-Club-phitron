#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
bool descendingOrder(int a, int b) 
{
    return a > b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int arr1[3], arr2[3];
        // vector<int> arr1(3), arr2(3);
        string arr1, arr2;
        FOR(i,0,3)
        {
            char c;
            cin >> c;
            arr1 += c;
        }
        FOR(i,0,3)
        {
            char c;
            cin >> c;
            arr2 += c;
        }
        sort(arr1.begin(), arr1.end(), descendingOrder);
        sort(arr2.begin(), arr2.end(), descendingOrder);
        int num1 = stoi(arr1);
        int num2 = stoi(arr2);
        if(num1 == num2)
        {
            cout << "Tie" << '\n';
        }
        else if(num1 > num2)
        {
            cout << "Alice" << '\n';
        }
        else
        {
            cout << "Bob" << '\n';
        }
    }
    
    return 0;
}