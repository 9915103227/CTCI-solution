#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int p=(int)(pow(2,n));
	for(int i=0;i<p;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(i&(1<<j))
				cout<<a[j];
		}
		cout<<endl;
	}
	//for(int j=0;j<p;j++)
	return 0;
}