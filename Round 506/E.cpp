#include<bits/stdc++.h>

using namespace std;
#define deci(n) cout<<fixed<<setprecision(n);
int main()
{
	double d = 999999999.0/500000000.0;
    deci(20);
    cout<<d<<endl;
    if(d>2)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}