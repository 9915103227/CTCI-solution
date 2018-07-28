#include<bits/stdc++.h>
using namespace std;
int func(int *a,int n,int m)
{
	if(n==0)
		return 1;
	if(n<0||m<0)
		return 0;
	return(func(a,n-a[m],m)+func(a,n,m-1));
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>m;
		int a[m];
		for(int j=0;j<m;j++)
			cin>>a[j];
		cin>>n;
		cout<<func(a,n,m-1)<<endl;
	}
}