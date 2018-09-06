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

    ll n,t;
    cin>>n>>t;

    ll a[n];
    ForA1(n)
    {
        cin>>a[i];
    }
    ll x[n];
    ForA1(n)
    {
        cin>>x[i];
    }

    for(ll i=1;i<n;i++)
    {
        if(x[i]<x[i-1])
        {
            cout<<"No"<<endl;
            return 0;
        }
        if(x[i]<=i)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    ll mini[n];
    ll maxi[n] = {0};

    for(ll i=0;i<n;i++)
    {
        mini[i] = a[x[i]-1]+t;
    }

    for(ll i=0;i<n;i++)
    {
        if(x[i]==n)
            continue;
        maxi[x[i]-1] = a[x[i]]+t-1;
    }

    ll b[n];

    ll cur = 1;
    for(ll i=0;i<n;i++)
    {
        if(cur<mini[i])
            cur = mini[i];
        
        if(maxi[i]>0 && cur>maxi[i])
        {
            cout<<"No"<<endl;
            return 0;
        }
        b[i] = cur;
        cur++;
    }

    cout<<"Yes"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
