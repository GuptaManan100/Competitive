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

    ll counter = 29;
    ll n;
    cin>>n;
    fflush(stdout);

    ll guess1 = 1;
    ll guess2 = n/2 + 1;

    while(counter>0)
    {
        ll answer1, answer2;
        cout<<"? "<<guess1<<endl;;
        fflush(stdout);
        cin>>answer1;
        fflush(stdout);
        cout<<"? "<<guess2<<endl;;
        fflush(stdout);
        cin>>answer2;
        fflush(stdout);

        ll dif = answer2 - answer1;
        if(dif<0)
            dif = -1 * dif;
        if(dif==0)
        {
            cout<<"! "<<guess1<<endl;
            return 0;
        }
        //dif = dif-2;
        dif = dif/2;
        guess1 += dif;
        guess2 += dif;

        counter--;
    }

    cout<<"! -1"<<endl;

    return 0;
}
