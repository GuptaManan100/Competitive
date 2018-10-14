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

bool checkKnight(ll cur_i, ll cur_j, ll next_i, ll nex_j)
{
    if(abs(cur_i-next_i)==2 && abs(cur_j-nex_j)==1)
        return true;
    if(abs(cur_i-next_i)==1 && abs(cur_j-nex_j)==2)
        return true;
    return false;
}

bool reach2Bishop(ll cur_i, ll cur_j, ll next_i, ll nex_j)
{
    if((cur_i+cur_j)%2==(next_i+nex_j)%2)
    {
        return true;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll siz = n*n;
    ll row[siz+1];
    ll col[siz+1];
    ll temp;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin>>temp;
            row[temp] = i;
            col[temp] = j;
        }
    }
    ll moves, mini;

    char best[siz+10];
    for(ll i=1;i<siz;i++)
    {
        if(row[i]==row[i+1]||col[i]==col[i+1])
        {
            best[i] = 'R';
        }
        else if(abs(row[i]-row[i+1]) == abs(col[i] - col[i+1]))
        {
            best[i] = 'B';
        }
        else if(checkKnight(row[i],col[i], row[i+1], row[i+1]))
        {
            best[i] = 'K';
        }
        else{
            best[i] = '?';
        }

    }
    for(ll i=siz;i<siz+10;i++)
    {
        best[i] = '.';
    }
    char curr_piece = 'R';
    ll ans = 0, shift = 0;
    for(ll i=1;i<siz;i++)
    {
        if(best[i]==curr_piece)
        {
            ans++;
            continue;
        }
        if(curr_piece=='R')
        {
            if(best[i]=='?')
            {
                ans+=2;
                continue;
            }
            if(best[i]==best[i+1] && best[i+2]==best[i])
            {
                curr_piece = best[i];
                ans+=2;
                shift++;
                continue;
            }
            ans+=2;
            continue;
        }
        if(curr_piece=='B')
        {
            
        }
    }

    return 0;
}
