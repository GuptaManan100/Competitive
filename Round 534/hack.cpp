#include<bits/stdc++.h>

using namespace std;

#define PI 3.14159265359

int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	float n,r,R,alpha;
	cin>>n>>r;
	R=(r*sin(PI/n))/(1-sin(PI/n));
	printf("%f", R);
}