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

    ll n;
    cin>>n;

    ll con[n+1];
    con[0]=0;
    ForN1(n)
    {
    	cin>>con[i];
    }
    sort(con,con+n+1);
    // ForN1(n)
    // {
    // 	cout<<con[i]<<" ";
    // }
    // cout<<endl;

    ll ans_min = 0;
    ll temp;
    ll mini[n+2] = {0};
    for(ll i=n;i>0;i--)
    {
    	mini[i] += mini[i+1];
    	temp = con[i] - mini[i];
    	if(temp<=0)
    	{
    		// cout<<temp<<endl;
    		ans_min-=temp;
    		continue;
    	}

    	mini[i-1]+=1;
    	temp = i-temp-1;
    	if(temp>=0)
    	{
    		mini[temp]-=1;
    	}
    }
    mini[0]+=mini[1];
    ans_min+=mini[0];

    // cout<<ans_min<<endl;




    ll ans_max = 0;
    ll maxi[n+2] = {0};
    for(ll i=n;i>0;i--)
    {
    	maxi[i] += maxi[i+1];
    	temp = con[i] - maxi[i];

    	if(temp<0)
    	{
    		cout<<-1<<endl;
    		return 0;
    	}
    	if(temp==0)
    	{
    		continue;
    	}

    	ans_max++;
    	temp--;

    	maxi[i-1]+=1;
    	temp = i-temp-1;
    	if(temp>=0)
    	{
    		maxi[temp]-=1;
    	}
    }
    maxi[0]+=maxi[1];
    ans_max+=maxi[0];

    // cout<<ans_max<<endl;

    for(ll i=ans_min; i<=ans_max; i+=2)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
