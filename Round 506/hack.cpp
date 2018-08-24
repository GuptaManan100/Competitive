#include<bits/stdc++.h>

using namespace std;

int main()
{
	long n;
	scanf("%ld",&n);
	double arr[n],b[n-1];
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
	}
	for(int i=1;i<n;i++)
	{
		double z=arr[i]/arr[i-1];
		if(z<=2)
		z=2;
		b[i-1]=z;
	}
	long max=0,temp=0;
	for(int i=0;i<n-1;i++)
	{
		if(b[i]==2)
		temp++;
		else
		temp=0;
		if(temp>max)
		max=temp;
	}
	printf("%ld",max+1);
	return 0;

}