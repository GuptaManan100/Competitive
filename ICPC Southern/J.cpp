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

    string inp;
    ll n,m,k;
    ll arr[26];
    ll used[26];
    ll rem;
    ll maxi;
    ll touse;
    ll answer;
    for(ll u=0;u<t;u++)
    {   
        for(ll i=0;i<26;i++)
        {
            arr[i] = 0;
            used[i] = 0;
        }
        cin>>n>>m>>k;
        cin>>inp;
        for(ll i=0;i<k;i++)
        {
            arr[inp[i]-'A']++;
        }

        rem = -1;
        while(n!=0 || m!=0)
        {
            if(rem!=0)
            {
                maxi = arr[0];
                touse = 0;
            }
            else
            {
                maxi = arr[1];
                touse = 1;
            }
            for(ll i=0;i<26;i++)
            {
                if(arr[i]>maxi && i!=rem)
                {
                    maxi = arr[i];
                    touse = i;
                }
            }
            if(maxi==0)
            {
                answer = max(n,m);
                cout<<answer*used[rem]<<endl;
                break;
            }
            else{
                answer = max(n,m);
                if(answer==n)
                {
                    answer = min(n,maxi);
                    n-= answer;
                    arr[touse]-=answer;
                    used[touse] = answer;
                    if(arr[touse]!=0)
                    {
                        rem = touse;
                    }
                }
                else
                {
                    answer = min(m,maxi);
                    m-= answer;
                    arr[touse]-=answer;
                    used[touse] = answer;
                    if(arr[touse]!=0)
                    {
                        rem = touse;
                    }
                }
            }
        }
        if(n==0 && m==0)
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}
