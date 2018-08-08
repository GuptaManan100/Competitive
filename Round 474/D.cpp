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
    ll values[70] ={0};
    ll rounds[70] ={0};

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
      int type;
      cin>>type;
      if(type==1)
      {
         ll number;
         ll shift;
         cin>>number>>shift;
         ll level = floor(log2(number))+1;
         values[level] += shift;
      }
      else if(type==2)
      {
         ll number;
         ll shift;
         cin>>number>>shift;
         ll level = floor(log2(number))+1;
         rounds[level] += shift;
      }
      else
      {
         ll now;
         cin>>now;
         cout<<now<<" ";
         ll level = floor(log2(now))+1;
         while(now!=1)
         {
            ll min = pow(2, level-1);
            ll max = pow(2, level)-1;
            now+= (rounds[level] + values[level]);
            while(now>max)
            {
               ll diff = max - min;
               now = min + (now - max - 1)%diff;
            }
            while(now<min)
            {
               ll diff = max - min;
               now = max - (min - now - 1)%diff;
            }
            ll prev = now/2;
            prev -= values[level-1];
            min = pow(2, level-2);
            max = pow(2, level-1)-1;
            while(prev>max)
            {
               ll diff = max - min;
               prev = min + (prev - max - 1)%diff;
            }
            while(prev<min)
            {
               ll diff = max - min;
               prev = max - (min - prev - 1)%diff;
            }
            now = prev;
            cout<<now<<" ";
            level--;
         }
         cout<<endl;
      }
    }
    return 0;
}
