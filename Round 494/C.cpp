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
    int arr[n];
    ForA1(n)
    {
      cin>>arr[i];
    }
    int sum =0;
    double max = 0;
    for(int i=0;i<=n-k;i++)
    {
      sum =0;
      for(int j=0;j<k;j++)
         sum+=arr[i+j];
      double temp = (sum+0.0)/k;
      int size = k;
      if(temp>max)
         max = temp;

      for(int j = i+k;j<n;j++)
      {
         size++;
         sum+=arr[j];
         temp = (sum+0.0)/size;
         if(temp>max)
            max = temp;
      }

    }
    deci(15);
    std::cout << max << '\n';

    return 0;
}
