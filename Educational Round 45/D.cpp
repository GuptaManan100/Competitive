#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a[1][2];
    a[0][0] =  99999999999;
    a[0][1] = 1000000;
    long long int k = 0;
    k+= a[0][0]*a[0][1];
    k+= a[0][0]*a[0][1];
    
    cout<<k;
    return 0;
}
