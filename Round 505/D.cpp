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

    int n;
    cin>>n;

    int arr[n];
    cin>>arr[0];
    int gc = arr[0]; 
    ForN1(n-1)
    {
        cin>>arr[i];
        gc = __gcd(gc,arr[i]);
    }
    ForA1(n)
    {
        arr[i] = arr[i]/gc;
    }

    int dp[n][n+1] = {{0}};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(__gcd(arr[i],arr[j])!=1)
            {
                dp[i][j] = 1;
                dp[j][i] =1;
                dp[i][n] += 1;
                dp[j][n] += 1;
            }
        }
    }
    map<int,int> mapper;
    //vector<int> temp;
    int counter =0;
    while(counter<n-1){
        int flag =0;
        for(int i=0;i<n;i++)
        {
            if(dp[i][n]==1)
            {
                dp[i][n]=-1;
                int j;
                for(j=0;j<n;j++)
                {
                    if(dp[i][j]==1)
                        break;
                }
                flag = 1;
                counter++;
                mapper[j]++;
                dp[i][j] = 0;
                dp[j][i]=0;
                dp[j][n] -=1;
                if(mapper[j]>2)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    

    return 0;
}
