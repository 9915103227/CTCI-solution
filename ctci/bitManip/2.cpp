#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a;
	cin>>a;
	if(a>1||a<0)
	{
		cout<<"error";
		return 0;
	}
	int x=0;
	string s="";
	while(a>0)
	{
		if(x>32){
			cout<<s;
			return 0;
		}
		a*=2;
		if(a>=1)
		{
			s+='1';
			a-=1;
		}
		else
		{
			s+='0';
		}
		x++;
	}
	cout<<s<<endl;
	return 0;
}
