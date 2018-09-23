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

    ll n;
    cin>>n;

    ll arr[n];
    ll summed[n];
    ll num;
    ll sum;
    for(ll i=0;i<n;i++)
    {
        cin>>num;
        sum = 0;
        while(num>0)
        {
            sum += num%2;
            num/=2;
        }
        arr[i] = sum;
    }
    // cout<<arr[0];
    summed[0] = arr[0];
    for(ll i=1;i<n;i++)
    {
        summed[i] = arr[i]+summed[i-1];
        // cout<<arr[i];
    }

    ll even[n];
    ll odd[n];

    if(summed[0]%2==0)
    {
        even[0]=1;
        odd[0] = 0;
    }
    else
    {
        odd[0] = 1;
        even[0] = 0;
    }

    ll answer = 0;
    for(ll i=1;i<n;i++)
    {
        even[i] = even[i-1];
        odd[i] = odd[i-1];
        if(summed[i]%2==0)
        {
            even[i]++;
        }
        else
        {
            odd[i]++;
        }
    }
    for(ll i=1;i<n;i++)
    {
        ll val = arr[i];
        ll max  = val;
        ll sum = val;
        ll index = i;
        while(max*2>sum && index>0)
        {
            index--;
            sum+=arr[index];
            if(arr[index]>max)
                max = arr[index];
        }

        if(index==0)
        {
            if(max*2<=sum)
            {
                if(sum%2==0)
                    answer++;
            }
        }
        else{
            if(sum%2==0)
            {
                answer+=even[index-1]+1;
            }
            else{
                answer+=odd[index-1];
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}
