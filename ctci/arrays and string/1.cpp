#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int tmp[26];
	for(int i=0;i<26;i++)
	{
		tmp[i]=0;
	}
	for(int j=0;j<n;j++)
	{
		
		int x= s[j]-'a';
		tmp[x]++;
		if(tmp[x]>1)
		{cout<<0;return 0;}
	}
	cout<<1;
	return 0;
}
