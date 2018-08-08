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
int modder = 1000000007;

int Punction(int m)
{
    long long int ans = 1;
    for(int i=1;i<m;i++)
    {
        if(__gcd(i,m)==1)
        {
            ans=(ans*i)%m;
        }
    }
    ans = ans%m;
    int answer = (int)ans;
    return answer;
}

int main() {
    ofstream fpo;
    fpo.open("output.txt");
    vector<int> isone;
    int counter = 0;
    for(int i=3;i<=pow(10,7);i++)
    {
        if(Punction(i)!=1)
        {
           counter++;
           isone.push_back(i);
        }
    }
    for(int i=0;i<isone.size();i++)
    {
      fpo<<isone[i]<<" ";
    }
    cout<<counter<<endl;
    return 0;
}
