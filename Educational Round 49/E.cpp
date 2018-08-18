#pragma GCC optimize("O3")
#include<bits/stdc++.h>

#define debug(x)        {cerr<<#x<<" = "<<x<<endl;}
#define mod             1e9+7;
#define test()          long long  o;cin>>o;while(o--)
#define input(vec)      for(unsigned int c=0;c<vec.size();cin>>vec[c++])
#define output(vec,x)   for(unsigned int c=0;c<vec.size();x<<vec[c++]<<' ');x<<endl;
#define sz(k)           k.size()
#define ln(s)           s.length()
#define pb              push_back
#define mp              make_pair
#define all(x)          x.begin(), x.end()
#define finc(i, x, y)   for (__typeof(x) i = x; i < y; i ++)
#define fdec(i, x, y)   for (__typeof(x) i = x; i > y; i --)
#define fincp(itr, x)   for (__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr ++)
#define fdecp(itr, x)   for (__typeof(x.enC:\cygnus\cygwin-b20\H-i586-cygwin32\bind()) itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define dragonforce()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI              (acos(-1.0))
#define E               2.71828182845904523536
#define incby(x)        [](const auto& a, const auto& b) { return a.x < b.x; }
#define decby(x)        [](const auto& a, const auto& b) { return a.x > b.x; }
#define F               first
#define S               second
#define mem(a,x)        memset(a,x,sizeof(a))
#define mnv(v)          *min_element(v.begin(),v.end())
#define mxv(v)          *max_element(v.begin(),v.end())
#define valid(tx,n)     (tx>=0&&tx<n)
#define pr(x)           cout<<fixed<<setprecision(x);

using namespace std;
typedef pair<int, int>  pi;
typedef vector<int>     vi;
typedef long long       ll;
typedef unsigned long long  ull;
typedef vector<string>  vs;

int main()
{ 
	dragonforce();
	test()
	{
		int n;
		cin>>n;
		string s;
		bool idk=true;
		cin>>s;
		for (int c = 0; c < n/2; ++c)
		{
			if(abs(s[c]-s[n-1-c])==2||s[c]==s[n-1-c])	continue;
			else if(abs(s[c]-s[n-1-c])==24)				continue;
			else {
				cout<<"NO"<<endl;
				idk=false;
				break;
			}
		}
		if(idk)
			cout<<"YES"<<endl;
	}
	
}