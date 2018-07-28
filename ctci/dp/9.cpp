#include<bits/stdc++.h>
using namespace std;
void func(int l, int r,string s)
{
	if(l==0&&r==0)
	{
		cout<<s<<endl;
		return;
	}
	if(l==r)
	{
		s+="(";
		func(l-1,r,s);
	}
	else
	{
		string ps=s;
		if(l>0){
			s+="(";
			func(l-1,r,s);
		}
		ps+=")";
		func(l,r-1,ps);
	}
}
int main()
{
	int n;
	cin>>n;
	//stack<int> st;
	string s="(";
	func(n-1,n,s);
}