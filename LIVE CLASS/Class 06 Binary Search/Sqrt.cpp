#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
bool areSame(double a,double b)
{
    return fabs(a - b) < 1e-15;
}
int main()
{
    double n;
    cin >> n;
    double l = 0.0;
    double r = n * 1.0;
    while ((r-l) >= 1e-15)
    {
        double mid = l + (r - l) / 2;
        double val = mid * mid;
        if(areSame(val,n))
        {
            cout << mid << '\n';
            break;
        }
        else if(val > n)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    
    return 0;
}