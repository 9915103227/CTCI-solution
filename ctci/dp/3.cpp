#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int l=0,r=n-1;
	while(l<=r){
		cout<<"hi"<<endl;
		int mid=(l+r)/2;
		if(a[mid]==mid)
		{
			cout<<mid<<endl;
			return 0;
		}
		if(a[mid]>mid)
		{
			r=mid-1;
			continue;
		}
		l=mid+1;
	}
}