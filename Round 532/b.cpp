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
#define vll vector<ll>
#define F first
#define S second
#define debug(x)    cerr << #x << " = " << x << endl;
#define mem(x) memset(x,0,sizeof(x))
#define PI 3.1415926535897932384626433832795l
#define deci(n) cout<<fixed<<setprecision(n);


using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m;
    cin>>n>>m;

    ll arr[n] = {0};

    ll isdinstinct = 0;

    int temp;
    ForA1(m)
    {
        cin>>temp;
        temp--;

        arr[temp]++;
        if(arr[temp]==1)
            isdinstinct++;

        if(isdinstinct==n)
        {
            cout<<1;
            isdinstinct=0;
            ForA2(n)
            {
                arr[j]--;
                if(arr[j]>0)
                   isdinstinct++;
            }
        }
        else
        {
            cout<<0;
        }
    }
    cout<<endl;


    return 0;
}