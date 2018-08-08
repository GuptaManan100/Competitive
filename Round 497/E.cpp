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
    std::cin >> n;

    ll x_guess = 1;
    ll y_guess = 1;
    ll x_min = 1;
    ll y_min = 1;
    ll x_max = n;
    ll x_max_prob =
    ll y_max = n;
    ll ans = 100;
    ll prev = 0;  // 0 for x and 1 for y
    ll

    while(ans!=0)
    {
      cout<<x_guess<<" "<<y_guess<<endl;
      fflush(stdout);

      cin>>ans;
      if(ans==1)
      {
         prev = 0;
         x_min = x_guess;
         x_guess = (x_max+x_min)/2;
         if(x_min==x_guess)
            x_guess++;
         continue;
      }
      else if(ans==2)
      {
         prev = 1;
         y_min = y_guess;
         y_guess = (y_max+y_min)/2;
         if(y_min==y_guess)
            y_guess++;
         continue;
      }
      else if(ans==3)
      {
         if(prev==0)
         {
            x_max = x_guess;
            x_guess = (x_max+x_min)/2;
            continue;
         }
         else if(prev==1)
         {
            y_max = y_guess;
            y_guess = (y_max+y_min)/2;
            continue;
         }
      }
    }

    return 0;
}
