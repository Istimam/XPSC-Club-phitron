#include <iostream>
using namespace std;
#include <string>

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
    int d;
    cin>>d;
    string s;
    cin>>s;
	    //cout<<s<<endl;
    int n = s.length();
    int p=0;
    
    if(d<=3) p = stoi(s);
    else {
        int i=0;
        int j = n-3;
        while(i<3){
            p = p*10+(s[j]-'0');
            j++;
            i++;
        }
    }
	    //cout<<p<<endl;
    
    if(p%8==0) cout<<s<<endl;
    else 
        {
            int h;
            h = p%10;
        /*while(b<z){
                h = u%10;
                u = u/10;
                b++;
        }*/
            
            p = p-h+1;

            int i=0;
	         //cout<<p<<endl;
            while(i<10)
            {
            if(p%8==0) break;
            p++;
            i++;
        }
        h = p%10;
        s[n-1] = (h+'0');
        cout<<s<<endl;
    }
	}
	return 0;
}