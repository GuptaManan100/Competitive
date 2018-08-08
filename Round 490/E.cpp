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
#define mem(x) memset(x,-1,sizeof(x))
#define PI 3.1415926535897932384626433832795l
#define deci(n) cout<<fixed<<setprecision(n);


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,s;
    cin>>n>>m>>s;
    s--;
    int connected[n][n]={{0}};

    for(int i=0;i<m;i++)
    {
      int start;
      int end;
      cin>>start>>end;
      start--;end--;
      connected[start][end] = 1;
    }

    int centre[n];
    mem(centre);
    centre[s]=-2;
    vector<int> left;
    left.pb(s);

    while(left.size()!=0)
    {
      int k = left.back();
      left.pop_back();
      for(int i=0;i<m;i++)
      {
         if(connected[k][i]==1)
         {
            if(centre[i]==-1)
            {
               centre[i]=-2;
               left.pb(i);
            }
         }
      }
    }

    ll answer = 0;
    for(int i=0;i<n;i++)
    {
      if(centre[i]==-1)
      {
         answer++;
         centre[i] = i;
         vector <int> already;
         left.push_back(i);
         already.push_back(i);
         while(left.size()!=0)
         {
           int k = left.back();
           left.pop_back();
           for(int j=0;j<m;j++)
           {
              if(connected[k][j]==1)
              {
                 if(centre[j]==-1)
                 {
                    centre[j]=-3;
                    left.pb(j);
                    already.pb(j);
                 }
                 else if(centre[j]==-3)
                 {
                   std::vector<int>::iterator it;
                   it = std::find (already.begin(), already.end(), j);
                   if(it == already.end())
                   {
                      left.pb(j);
                      already.pb(j);
                   }
                 }
                 else if(centre[j]!=-2 && centre[j]!=i)
                 {
                    centre[j]=-3;
                    answer--;
                 }
              }
           }
         }
      }
    }

    cout<<answer<<endl;

    return 0;
}
