#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }

   map<pair<int, int>, int> pairs;

   long long int count = 0;
   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
           if (pairs[{ arr[i], arr[j] }] == 0)
           {
               count++;
               pairs[{ arr[i], arr[j] }]++;
           }
      }
   }
   cout<< count<<endl;
    return 0;
}
