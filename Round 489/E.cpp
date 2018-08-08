#include <bits/stdc++.h>
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pair pair<int,int>
#define F first
#define S second
#define mem(x) memset(x,0,sizeof(x))

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>l>>q;
    ll arr[n];
    ll sum[n];
    cin>>arr[0];
    sum[0]=arr[0];
    ll prevans[n] = {0};
    ll size =0;
    for(int i=1;i<n;i++)
    {
      cin>>arr[i];
      sum[i] = arr[i]+sum[i-1];
      if(arr[i] == sum[i-1])
      {
         prevans[size] = i;
         size++;
      }         
    }
    while(q>0)
    {
      int add;
      ll value;
      cin>>add>>value;


      q--;
    }

    return 0;
}
