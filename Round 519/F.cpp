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
    cin>>arr[0];
    ll gc = arr[0];
    ForN1(n-1)
    {
        cin>>arr[i];
        gc = __gcd(gc,arr[i]);
    }

    if(gc!=1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    ll answer = n+1;

    int end= -1;
    int start=0;
    int temp;
    while(end!=n+1)
    {
        gc=arr[start];
        temp = start+1;
        while(gc!=1&&temp<n)
        {
            gc = __gcd(gc,arr[temp]);
            temp++;
        }
        temp--;
        if(gc==1)
        {
            end = temp;
        }
        else
        {
            break;
        }
        gc = arr[end];
        temp = end-1;
        while(gc!=1 && temp>=0)
        {
            gc = __gcd(gc,arr[temp]);
            temp--;
        }
        temp++;
        start = temp;
        if(end-start +1< answer)
        {
            //cout<<end<<start<<endl;
            answer = end-start+1;
        }

        start ++;
    }

    cout<<answer<<endl;

    return 0;
}
