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

ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        // q is quotient
        ll q = a / m;
        ll t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
        t = y;
 
        // Update y and x
        y = x - q * y;
        x = t;
    }
 
    // Make x positive
    if (x < 0)
       x += m0;
 
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin>>n>>k;
    map<ll,ll> mapper;

    ll arr[] = {10,100,1000,10000,100000,1000000, 10000000, 100000000, 1000000000, 10000000000};
    for(int i=0;i<10;i++)
    {
        arr[i] = arr[i]%k;
    }
    ll g;
    cin>>g;
    g = g%k;
    ll answer =0;
    mapper[g]++;
    for(ll i=1;i<n;i++)
    {
        cin>>g;
        ll dig= 0;
        ll temp = 1;
        while(g>=temp)
        {
            dig++;
            temp*=10;
        }
        g = g%k;
        temp = arr[dig-1];
        if(__gcd(temp,k)==1)
        {
            mapper[g]++;
            continue;
        }
        ll req = k-g;
        ll ans = (modInverse(temp, k)*req)%k;
        answer+= mapper[ans];
        mapper[g]++;
    }
    cout<<answer<<endl;
    return 0;
}
