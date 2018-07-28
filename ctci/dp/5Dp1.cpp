#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int smaller,bigger;
	if(n>m)
	{
		bigger=n;
		smaller=m;
	}else
	{
		bigger=m;
		smaller=n;
	}
	int mat[smaller+1];
	mat[0]=0;
	mat[1]=bigger;
	for(int j=2;j<=smaller;j++)
	{
		int s=j>>1;
		int x1=mat[s];
		int x2=x1;
		if(j%2==1)
		{
			x2=mat[j-j/2];
		}
		mat[j]=x1+x2;
	}
	cout<<mat[smaller];
}