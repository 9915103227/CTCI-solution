#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n+1];
		a[0]=0;
		for(int j=1;j<n;j++)
		{
			int s=0;
			if(j>=1)
				s+a[j-1];
			if(j>=2)
				s+=a[j-2];
			if(j>=3)
				s+=a[j-3];
			a[j]=s;
		}
		cout<<a[n]<<endl;
	}
	return 0;
}