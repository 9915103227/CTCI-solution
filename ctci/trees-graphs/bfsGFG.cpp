//https://practice.geeksforgeeks.org/problems/x-total-shapes/0
#include<bits/stdc++.h>
using namespace std;
void func(bool *visited,char *a,int n,int m,int j,int k){
	if((j>=n)||(k>=m)||(j<0)||(k<0))
		return;
	//visited[j][k]=true;
	if(*(a+j*m+k)=='O'||*(visited+j*m+k)==true)
	    return;
	*(visited+j*m+k)=true;
	func(visited,a,n,m,j-1,k);
					func(visited,a,n,m,j+1,k);
					func(visited,a,n,m,j,k-1);
					func(visited,a,n,m,j,k+1);
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		char a[n][m];
		bool visited[n][m];
		for(int j=0;j<n;j++)
		{
			string str;
			cin>>str;
			for(int k=0;k<m;k++)
			{
				a[j][k]=str[k];
				visited[j][k]=false;
			}
		}
		int count=0;
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(!visited[j][k] && a[j][k]=='X'){
					visited[j][k]=true;
					count++;
					func(&visited[0][0],&a[0][0],n,m,j-1,k);
					func(&visited[0][0],&a[0][0],n,m,j+1,k);
					func(&visited[0][0],&a[0][0],n,m,j,k-1);
					func(&visited[0][0],&a[0][0],n,m,j,k+1);
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}