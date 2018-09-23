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

#define mod 998244353
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

int WW(int n, int k);
int BW(int n, int k);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    

    cout<<BW(n,k);
    return 0;
}


int WW(int n, int k)
{
    if(k==1)
    {
        return 2;
    }
    if(k<1)
    {
        return 0;
    }
    if(n==1)
    {
        return 0;
    }

    return (WW(n-1,k-1) + WW(n-1,k) + 2*(BW(n-1,k-1)))%mod;
}

int BW(int n, int k)
{
    if(k==1)
    {
        return 0;
    }
    if(k<1)
    {
        return 0;
    }
    if(n==1)
    {
        if(k==2)
            return 2;
        return 0;
    }

    return (BW(n-1,k) + BW(n-1,k-2) + 2*(WW(n-1,k-1)))%mod;
}

