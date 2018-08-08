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

    int n,k;
    cin>>n>>k;
    map<int,int>mapper;

    for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;
      num = num%k;
      mapper[num]++;
      int dif = k - num;
      int temp = (num+dif)%k;
      while(temp!=num)
      {
         mapper[temp]++;
         temp = (temp+dif)%k;
      }

    }
    int counter = 0;
    for(int i=0;i<k;i++)
    {
      if(mapper[i]>0)
      {
         counter++;
         continue;
      }
      else
      {
         for(int j=0;j<=(i+1)/2;j++)
         {
            if(mapper[j]>0 && mapper[i-j]>0)
            {
               mapper[i]++;
               counter++;
               break;
            }
         }
      }
    }

    cout<<counter<<endl;
    for(int i=0;i<=k;i++)
    {
      if(mapper[i]>0)
         cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
