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

    ll c;
    cin>>c;
    ll n,m,t;
    ll arr[200005];
    ll d,answer;
    ll sum, doub,count;
    for(;c>0;c--)
    {
        cin>>n>>m>>t;
        ForN1(n)
        {
            cin>>arr[i];
        }
        
        answer =0;
        d=1;
        for(ll i = 1;i<=n;i++)
        {
            sum = 0;
            doub=0;
            count =0;
            ForN2(n)
            {
                if(arr[j]>arr[i])
                    continue;
                count++;
                doub+=arr[j];
                if(sum+doub<=t)
                {
                    if(count>answer)
                    {
                        answer = count;
                        d = arr[i];
                    }
                }
                else
                    break;
                if(count%m== 0)
                {
                    sum+=doub*2;
                    doub=0;
                }
            }
        }
        //cout<<sorted[min_d]<<" "<<sorted[max_d]<<endl;
        cout<<answer<<" "<<d<<endl;
    }

    return 0;
}
