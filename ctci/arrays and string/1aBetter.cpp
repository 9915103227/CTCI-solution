#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int check=0;
	for(int i=0;i<len;i++)
	{
		int val=s[i]-'a';
		if((check&(1<<val))>0){
			cout<<0<<endl;
			return 0;
		}
		check|=(1<<val);
	}
	cout<<1<<endl;
	return 0;
}