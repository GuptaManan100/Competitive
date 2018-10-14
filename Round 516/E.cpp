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


typedef struct Pointed
{
    ll row;
    ll col;
    ll lef;
    ll rig;
}point;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,r,c,left,right;
    cin>>n>>m>>r>>c>>left>>right;
    char board[n+1][m+1];
    ll used[n+1][m+1];
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cin>>board[i][j];
            used[i][j] = left+right+1;
        }
    }

    point fir;
    fir.row = r;
    fir.col = c;
    fir.lef = left;
    fir.rig = right;
    stack<point> st;
    st.push(fir);

    while(!st.empty())
    {
        point temp = st.top();
        st.pop();
        if(board[temp.row][temp.col]=='*')
            continue;
        if(board[temp.row][temp.col]=='+' && used[temp.row][temp.col]<=left - temp.lef)
            continue;
        board[temp.row][temp.col] = '+';
        used[temp.row][temp.col] = left - temp.lef;
        for(ll i=temp.row-1;i>0;i--)
        {
            if(board[i][temp.col]=='*')
                break;
            if(board[i][temp.col]=='+' && used[i][temp.col]<=left -temp.lef)
                break;
            board[i][temp.col] = '+';
            used[i][temp.col] = used[temp.row][temp.col];
            point next;
            next.row = temp.row;
            next.col = i;
            next.lef = temp.lef;
            next.rig = temp.rig;
            st.push(next);
        }

        for(ll i=temp.row+1;i<=n;i++)
        {
            if(board[i][temp.col]=='*')
                break;
            if(board[i][temp.col]=='+' && used[i][temp.col]<=left - temp.lef)
                break;
            board[i][temp.col] = '+';
            used[i][temp.col] = used[i][temp.col];
            point next;
            next.row = temp.row;
            next.col = i;
            next.lef = temp.lef;
            next.rig = temp.rig;
            st.push(next);
        }

        if(temp.col +1 <=m && temp.rig>0)
        {
            point next;
            next.row = temp.row;
            next.col = temp.col+1;
            next.lef = temp.lef;
            next.rig = temp.rig-1;
            st.push(next);
        }
        if(temp.col -1 >0 && temp.lef>0)
        {
            point next;
            next.row = temp.row;
            next.col = temp.col-1;
            next.lef = temp.lef-1;
            next.rig = temp.rig;
            st.push(next);
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cout<<board[i][j];
        }
        cout<<endl;
    }
    ll answer = 0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            if(board[i][j]=='+')
                answer++;
        }
    }
    cout<<answer<<endl;
    return 0;
}
