#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int a[26];
	for(int j=0;j<26;j++)
		a[j]=0;
	for(int i=0;i<len;i++)
	{
		a[s[i]-97]++;
		if(a[s[i]-97]>1)
		{
			cout<<"false"<<endl;
			return 0;
		}
	}
	cout<<"true"<<endl;
	return 0;
}