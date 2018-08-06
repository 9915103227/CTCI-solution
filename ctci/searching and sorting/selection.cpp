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
	int k=0;
	
	for(int i=0;i<n;i++){
		int mEl=INT_MAX;
	int mPos=0;
		for(int j=k;j<n;j++)
		{
			if(a[j]<mEl){
				mEl=a[j];
				mPos=j;
			}
		}
		int t=a[k];
		a[k]=a[mPos];
		a[mPos]=t;
		k++;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}	
}