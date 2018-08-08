#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int binaryarr[n] = {0};
    int x =1;
    while(x)
    {
        //do stuff
        int g = n-1;
        while(binaryarr[g]==1)
        {
            binaryarr[g]=0;
            g--;
        }
        if(g==-1)
            x=0;
        else
            binaryarr[g]=1;
    }


    return 0;
}
