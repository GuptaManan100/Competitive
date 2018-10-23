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
    string s;
    ll arr[55];
    ll len;
    ll flag;
    ll ran;
    ForA1(t)
    {
        flag =0;
        cin>>s;
        len = s.length();

        for(ll j=0;j<55;j++)
        {
            arr[j]=0;
        }

        for(ll j=0;j<len;j++)
        {
            if(s[j]=='.')
                continue;
            ran = (ll) (s[j] - '0');
            //cout<<ran<<endl;
            for(ll k=max((ll) 0,j-ran);k<min(len,j+ran+1);k++)
            {
                if(arr[k]==1)
                {
                    flag =1;
                    break;
                }
                arr[k]=1;
            }
            if(flag==1)
                break;
        }
        if(flag==1)
        {
            cout<<"unsafe"<<endl;
        }
        else
        {
            cout<<"safe"<<endl;
        }
    }


    return 0;
}
