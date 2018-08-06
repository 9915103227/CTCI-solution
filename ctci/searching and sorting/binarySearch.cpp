#include<bits/stdc++.h>
using namespace std;
int search(int *a,int x,int l,int r){
	if(l<=r){
		int mid=(l+r)/2;
		if(x<a[mid])
		{
			return(search(a,x,l,mid));
		}
		else
		{
			if(x>a[mid]){
				return(search(a,x,mid+1,r));
			}
			else
				return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int j=0;j<n;j++){
		cin>>a[j];
	}
	int x;
	cin>>x;
	cout<<search(a,x,0,n-1);
}