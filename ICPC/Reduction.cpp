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

    ll t;
    cin>>t;
    ll n,k, sum;
    ll rem,diff;
    ll arr[55];
    ForA1(t)
    {
        sum=0;
        cin>>n>>k;
        ForA2(n)
        {
            cin>>arr[j];
            sum+=arr[j];
        }
        sort(arr, arr+n);
        if(n==1)
        {
            cout<<sum<<endl;
            continue;
        }

        if(arr[n-2]<=k)
        {
            cout<<sum<<endl;
            continue;
        }

        rem = 0;
        ForA2(n-2)
        {
            if(arr[j]>k)
            {
                rem+=arr[j]-k;
                arr[j] = k;
            }
        }

        if(rem+k>=arr[n-2])
        {
            diff = rem +k - arr[n-2];
            arr[n-2]= k;
            diff = diff%2;
            arr[n-1] -= diff;
        }
        else
        {
            arr[n-2]  = arr[n-2] - rem;
            arr[n-1] -= arr[n-2]-k;
            arr[n-2] = k;
        }

        sum = 0;
        ForA2(n)
        {
            sum+=arr[j];
        }

        cout<<sum<<endl;
    }


    return 0;
}
