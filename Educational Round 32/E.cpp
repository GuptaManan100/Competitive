#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,m;
    cin>>n>>m;

    long long int arr[n];

    for(int i=0;i<n;i++)
    {
    	long long int s;
    	cin>>s;
    	arr[i] = s%m;
    }

    
    int array[n] = {0};
    array[n-1] = 1;
    long long int max = 0;
    int x =1;
    while(x)
    {
    	long long int answer = 0;
    	for(int i=0;i<n;i++)
    	{
    		if(array[i]==1)
    		{
    			answer += arr[i];
    			answer = answer%m;
    		}
    	}
    	if(answer>max)
    		max = answer;

    	if(max == m-1)
    		break;
        //do stuff
        int g = n-1;
        while(array[g]==1)
        {
            array[g]=0;
            g--;
        }
        if(g==-1)
            x=0;
        else
            array[g]=1;
    }

    cout<<max<<endl;

    return 0;
}
