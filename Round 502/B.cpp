#include <bits/stdc++.h>

typedef unsigned long long int ull;
typedef long double ldb;
typedef long long int ll;

#define ForA1(n)  for (ll i=0; i<n; i++)
#define ForA2(n)  for (ll j=0; j<n; j++)
#define ForA3(n)  for (ll k=0; k<n; k++)
#define ForN1(n)  for (ll i=1; i<=n; i++)
#define ForN2(n)  for (ll j=1; j<=n; j++)
#define ForN3(n)  for (ll k=1; k<=n; k++)

#define finc(i,a,b)  for (ll i=a; i<b; i++)
#define fdecc(i,a,b)  for (ll i=a; i>=b; i--)

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pair pair<int,int>
#define F first
#define S second
#define mem(x) memset(x,0,sizeof(x))
#define PI 3.1415926535897932384626433832795l
#define deci(n) cout<<fixed<<setprecision(n);


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n=0;
    cin>>n;

    char a[n], b[n];
    
    finc(i,0,n)
    {
        cin>>a[i];
    }
    ll a1b1=0, a0b0=0, a1b0=0, a0b1=0;
    finc(i,0,n)
    {
        cin>>b[i];
        if(b[i]=='0')
        {
            if(a[i]=='0')
                a0b0++;
            else
                a1b0++;
        }
        else
        {
            if(a[i]=='0')
                a0b1++;
            else
                a1b1++;
        }
    }
    ll answer =0;

    answer = (a0b0*a1b0) + (a0b0*a1b1) + (a0b1*a1b0);

    cout<<answer<<endl;



    return 0;
}
