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

    ifstream fpi;
    fpi.open("input.txt");
    ofstream fpo;
    fpo.open("output.txt");

    ll t;
    fpi>>t;
    ForN1(t)
    {
      fpo<<"Case #"<<i<<": ";
      ll n,k,v;
      fpi>>n>>k>>v;
      string arr[n];
      ForA2(n)
      {
         fpi>>arr[j];
      }
      ll finder = (v-1)*k;
      ll start = finder%n;
      ll end = start+k-1;
      if(end>=n)
      {
         end -=n;
         for(ll j=0;j<=end;j++)
         {
            fpo<<arr[j]<<" ";
         }
         for(ll j=start;j<n-1;j++)
         {
            fpo<<arr[j]<<" ";
         }
         fpo<<arr[n-1];
      }
      else
      {
         for(ll j=start;j<end;j++)
         {
            fpo<<arr[j]<<" ";
         }
         fpo<<arr[end];
      }
      fpo<<endl;
    }

    fpi.close();
    fpo.close();

    return 0;
}
