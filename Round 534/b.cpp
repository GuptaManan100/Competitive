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
#define vll vector<ll>
#define F first
#define S second
#define debug(x)    cerr << #x << " = " << x << endl;
#define mem(x) memset(x,0,sizeof(x))
#define PI 3.1415926535897932384626433832795l
#define deci(n) cout<<fixed<<setprecision(n);


using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string verd;
    char c;
    ll mini, maxi, flag,mid;
    ll counter=0;
    while(true)
    {
        cin>>verd;
        if(verd=="end"||verd=="mistake")
            return 0;
        
        cout<<"? "<<0<<" "<<1<<endl;
        fflush(stdout);  
        cin>>c;
        if(c=='x')
        {
            cout<<"! 1"<<endl;
            continue;
        }  
        
        counter = 0;
        mini = 1;
        maxi = 2;
        flag = 0;
        while(flag == 0)
        {
            cout<<"? "<<mini<<" "<<maxi<<endl;
            fflush(stdout);
            counter++;
            cin>>c;
            if(c=='e')
            	return 1;
            if(c=='x')
            {
                flag = 1;
            }
            else
            {
                mini *=2;
                maxi*=2;
            }
            if(maxi>100000000)
            	maxi = 1000000000;
        }
        

        while(maxi-mini > 1)
        {
            mid = (mini+maxi)/2;
            cout<<"? "<<mini<<" "<<mid<<endl;
            fflush(stdout);
            counter++;
            cin>>c;
            if(c=='e')
            	return 1;
            if(c=='x')
            {
                maxi=mid;
            }
            else
            {
                mini =mid;
            }
        }

        cout<<"! "<<maxi<<endl;
        //cout<<counter<<endl;
        fflush(stdout);
    }

    return 0;
}
