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
    cin>>n>>m;
    ll answer = 0;
    ll arr[n];
    vector<ll> occur;
    ForA1(n)
    {
      cin>>arr[i];
      if(arr[i]==m)
         occur.pb(i);
    }
    if(occur.size()==0)
    {
      cout<<"0"<<endl;
      return 0;
    }
    if(occur.size()==n)
    {
      answer = (n*(n+1))/2;
      cout<<answer<<endl;
      return 0;
    }
    occur.pb(n);
    for(ll p=occur.size()-2;p>=0;p--)
    {
      ll first = occur[p];
      ll finish = occur[p+1];
      map<ll,ll> val;
      ll median = 1;
      ll dif = 0;
      val[0]++;
      for(ll i=first+1;i<finish;i++)
      {
         if(arr[i]>m)
            dif++;
         else
            dif--;
         val[dif]++;
      }
      answer += val[0]+val[1];
      ll until =0;
      for(ll i = first-1;i>=0;i--)
      {
         if(arr[i]>m)
            until++;
         else if(arr[i]<m)
            until--;
         else
            median++;
         for(ll j = -1*(median-1);j<=median;j++)
         {
            answer += val[j-until];
         }
      }
    }
    cout<<answer<<endl;
    return 0;
}
