#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;	cin>>n>>k;
	string s;	cin>>s;
	int count[26] = {0};
	int prefix[26] = {0};
	for (int i = 0; i < n; i++)
	{
		count[s[i] - 97]++;
	}
	prefix[0] = count[0];
	//cout<<prefix[0]<<" ";
	for (int i = 1; i < 26; i++)
	{
		prefix[i] = prefix[i - 1] + count[i];
		//cout<<prefix[i]<<" ";
	}
	int j;
	for (j = 0; j < 26; j++)
	{
		if (prefix[j] > k)
		{
			break;
		}
	}
	for (int i = 0; i < j; i++)
	{
		for (int k = 0; k < s.size(); k++)
		{
			if (s[k] == i+97)
			{
				s[k] = 'A';
			}
		}
	}
	if (j == 26)
	{
		cout<<endl;
	}
	else if (j == 0)
	{
		int diff = k;
		for (int i = 0; i < s.size(); i++)
		{
			if (diff > 0)
			{
				if (s[i] == j+97)
				{
					s[i] = 'A';
					diff--;
				}
			}
			else
			{
				break;
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != 'A')
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	else
	{
		int diff = k - prefix[j - 1];
		//cout<<diff<<endl;
		for (int i = 0; i < s.size(); i++)
		{
			if (diff > 0)
			{
				if (s[i] == j+97)
				{
					s[i] = 'A';
					diff--;
				}
			}
			else
			{
				break;
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != 'A')
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
