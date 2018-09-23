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
int n,m,pp,x,sum;
char ch[300];
int dfs(int s)
{
    int zz=0,ss=0;
    for(int i=1;i<=n;i++)
    {
        zz+=(ch[i]-'0');
        if(zz==s)
        {
            zz=0;
            ss++;
        }
    }
    if(zz==0&&ss>1) return 1;
    else return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pp=0;
    cin>>n;
    cin>>ch+1;
    for(int l=1;l<n;l++)
    {
        x+=(ch[l]-'0');
        if(dfs(x))
        {
            pp=1;
            break;
        }
    }
    if(pp==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
