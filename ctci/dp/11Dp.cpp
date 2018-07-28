#include<bits/stdc++.h>
using namespace std;
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
		//cout<<func(a,n,m-1)<<endl;
		int mat[n+1][m];
		for(int j=0;j<m;j++)
		{
			mat[0][j]=1;
		}
		for(int j=1;j<=n;j++)
		{
			for(int k=0;k<m;k++)
			{
				int s=0;
				if(j>=a[k])
					s+=mat[j-a[k]][k];
				if(k>0)
					s+=mat[j][k-1];
				mat[j][k]=s;
			}
		}
		cout<<mat[n][m-1]<<endl;
	}
	return 0;
}