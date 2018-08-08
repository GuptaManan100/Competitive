
// only count
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];
    map<int, int> m;

    ll answer = 0;
    ll right = 0;
    ForA1(n)
    {
      cin>>arr[i];
      m[arr[i]]++;
      if(m[arr[i]]==1)
         right++;
    }

    ForA1(n-1)
    {
      if(m[arr[i]]==1)
      {
         right--;
         answer+= right;
         continue;
      }
      else if(m[arr[i]]==-1)
      {
         right--;
         continue;
      }
      else if(m[arr[i]]<0)
      {
         m[arr[i]]++;
      }
      else
      {
         answer+= right;
         m[arr[i]] = -(m[arr[i]]-1);
         continue;
      }
    }
    cout<<answer<<endl;
    return 0;
}



//count + all pairs
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
