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
    std::cin >> t;
    while(t>0)
    {
      ll a,b,c;
      cin>>a>>b>>c;
      vector<ll> factor_a;
      vector<ll> factor_b;
      vector<ll> factor_c;
      for (ll i=1; i<=sqrt(a); i++)
      {
        if (a%i == 0)
        {
            if (a/i == i)
                factor_a.pb(i);

            else // Otherwise print both
            {
                   factor_a.pb(i);
                   factor_a.pb(a/i);
            }
        }
       }
       for (ll i=1; i<=sqrt(b); i++)
       {
         if (b%i == 0)
         {
             if (b/i == i)
                 factor_b.pb(i);

             else // Otherwise print both
             {
                    factor_b.pb(i);
                    factor_b.pb(b/i);
             }
         }
        }
        for (ll i=1; i<=sqrt(c); i++)
       {
         if (c%i == 0)
         {
             if (c/i == i)
                 factor_c.pb(i);

             else // Otherwise print both
             {
                    factor_c.pb(i);
                    factor_c.pb(c/i);
             }
         }
        }

       sort(factor_a.begin(),factor_a.end());
       sort(factor_b.begin(),factor_b.end());
       sort(factor_c.begin(),factor_c.end());

       ll dp[factor_b.size()];
       for(ll i=0;i<factor_b.size();i++)
       {
          ll num = factor_b[i];
          ll low1;
          low1 = (ll)(std::lower_bound(factor_c.begin(), factor_c.end(),num) - factor_c.begin());
          dp[i] = factor_c.size() - low1;
       }
       for(ll i = factor_b.size()-2;i>=0;i--)
       {
          dp[i]+=dp[i+1];
       }
       ll answer = 0;
       for(ll i=0;i<factor_a.size();i++)
       {
          ll num = factor_a[i];
          ll low1;
          low1 = (ll)(std::lower_bound(factor_b.begin(), factor_b.end(),num) - factor_b.begin());
          if(low1!=factor_b.size())
            answer += dp[low1];
       }
       cout<<answer<<endl;
      t--;
    }

    return 0;
}
