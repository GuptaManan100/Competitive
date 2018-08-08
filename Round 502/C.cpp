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
#define finc(i,a,b)  for (ll i=a; i<b; i++)

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

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    if(n==2)
    {
        cout<<"1 2"<<endl;
        return 0;
    }

    ll divider = 2;
    ll answer = 2 + (n+1)/2;
    for(int i=1;i<n;i++)
    {
        ll answer_i = (i)+ ((n+i-1)/i);
        if(answer_i<answer)
        {
            answer = answer_i;
            divider = i;
        }
    }

    ll printed[n];
    ll start = n-divider;
    ll prev;
    ll i=1;
    while(start>0)
    {
        for(int j=0;j<divider;j++)
        {
            printed[start+j] = i;
            prev = i;
            i++;
        }
        start -= divider;
    }
    start =0;
    for(ll k=prev+1;k<=n;k++)
    {
        printed[start] = k;
        start++;
    }
    for(ll k=0;k<n;k++)
    {
        cout<<printed[k]<<" ";
    }
    cout<<endl;
    return 0;
}
