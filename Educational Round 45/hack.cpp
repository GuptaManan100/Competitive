#include<bits/stdc++.h>
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pair pair<int,int>
#define F first
#define S second
#define mem(x) memset(x,0,sizeof(x))

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n]={0};
    for(ll i=0;i<m;i++)
    {
      ll x;
      cin>>x;
      arr[x]=1;
    }
    ll cost[k+1];
    for(ll i=1;i<=k;i++)
        cin>>cost[i];
     // cout<<cost[2]<<" ";
    if(arr[0]==1)
    {
      cout<<"-1";return 0;
    }
    ll pi=0;
    ll pos[n];
    for(ll i=1;i<n;i++)
    {
      if(arr[i]==1)
      {
        pos[i]=pi;
      }
      else
        pi=i;
    }
   /* for(int i=0;i<n;i++)
        cout<<pos[i]<<" ";*/


    ll i=1;
    ll ans=-1;
    ll f=0;
    //ll status[n]={0};
    while(i<=k)
    {
      ll ct=0;
      ll p=0;
      ll prev=0;
      ll flag=0;
      while(p<n)
      {
        if(arr[p]==0)
        {
          //status[p]=1;
          ct++;
          prev=p;
          p = p+i;
        }
        else
        {
          ll x = pos[p];
          if(x<=prev)
            {flag=1;break;}
            ct++;
            prev=x;
            p = x+i;

        }
      }
      //cout<<ct<<" "<<i<<" "<<flag<<"\n";
      if(flag==0)
      {
        f=1;
        if(ans == -1)
         ans = cost[i]*ct;
        ans = min(ans,cost[i]*ct);
      }
      i++;
    }
    if(f==0)
        cout<<"-1";
    else
      cout<<ans;

    return 0;
}
