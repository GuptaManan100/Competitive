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

#define mod 998244353
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

string n,l,r;
int n_length, l_length, r_length;

ll arr[1000005];

int Calculate(int index)
{
    if(index==n_length)
        return 1;
    if(index>n_length)
        return 0;
    if(arr[index]!=-1)
        return arr[index];

    string temp = "";
    int flag = 0;
    for(ll i=0;i<l_length;i++)
    {
        if(i+index>=n_length)
        {
            arr[index] = 0;
            return 0;
        }
        temp+=n[i+index];   
    }
    for(ll i=0;i<l_length;i++)
    {
        if(temp[i]<l[i])
        {
            flag = 1;
            break;
        }
        if(temp[i]>l[i])
        {
            break;
        }
    }
    ll start = l_length+index;
    if(flag==1)
    {
        if(l_length+index>=n_length)
        {
            arr[index] = 0;
            return 0;
        }
        temp += n[l_length+index];
        start++;
    }
    
    ll answer = 0;
    if(start==n_length)
    {
        if(temp.length()<r_length)
        {
            answer += 1;
            answer = answer % mod;
            arr[index] = answer;
            return answer;
        }
        else{
            flag = 0;
            for(ll i=0;i<l_length;i++)
            {
                if(temp[i]<r[i])
                {
                    break;
                }
                if(temp[i]>r[i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
            {
                arr[index] = answer;
                return answer;
            }
            else
            {
                answer+= Calculate(start);
                answer = answer % mod;
                arr[index] = answer;
                return answer;
            }
        }
    }
    
    while(temp.length()<r_length)
    {
        answer += Calculate(start);
        answer = answer % mod;
        temp += n[start];
        start++;
        if(start==n_length)
            break;
    }

    if(temp.length()<r_length)
    {
        answer += 1;
        answer = answer % mod;
        arr[index] = answer;
        return answer;
    }
    else{
        flag = 0;
        for(ll i=0;i<l_length;i++)
        {
            if(temp[i]<r[i])
            {
                break;
            }
            if(temp[i]>r[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            arr[index] = answer;
            return answer;
        }
        else
        {
            answer+= Calculate(start);
            answer = answer % mod;
            arr[index] = answer;
            return answer;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>l>>r;

    for(ll i=0;i<1000005;i++)
        arr[i]=-1;

    n_length = n.length();
    l_length = l.length();
    r_length = r.length();

    cout<<Calculate(0)<<endl;

    return 0;
}
