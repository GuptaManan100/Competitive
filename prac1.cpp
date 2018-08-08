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
    ll n,m;
    ifstream fpi;
    fpi.open("input.txt");
    ofstream fpo;
    fpo.open("output.txt");
    fpi>>n>>m;

    ll min, max;
    max = (n*(n-1))/2;
    if(n%2==1)
    {
      min = ((n-1)*(n+1))/4;
    }
    else
    {
      min = (n*n)/4;
    }
    double mean = 0;
    while(m>0)
    {
      ll x,d;
      fpi>>x>>d;
      mean+=x;
      if(d<0)
      {
         mean += d* ((min+0.0)/n) ;
      }
      else
      {
         mean+= d* ((max+0.0)/n) ;
      }
      m--;
    }

    deci(15);
    fpo<<mean<<endl;
    return 0;
}