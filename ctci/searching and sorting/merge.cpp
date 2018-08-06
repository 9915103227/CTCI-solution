#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int l,int m,int r){
	vector<int> vecL,vecH;
	for(int j=l;j<=m;j++)
		vecL.push_back(a[j]);
	for(int j=m+1;j<=r;j++)
		vecH.push_back(a[j]);
	vector<int>::iterator itr1=vecL.begin(),itr2=vecH.begin();
	while(itr1!=vecL.end()&&itr2!=vecH.end()){
		if(*itr1<*itr2){
			a[l++]=*itr1;
			itr1++;
		}else{
			a[l++]=*itr2;
			itr2++;
		}
	}
	while(itr1!=vecL.end()){
		a[l++]=*itr1;
		itr1++;
	}
	while(itr2!=vecH.end()){
		a[l++]=*itr2;
		itr2++;
	}
}
void mergesort(int *a,int l,int r){
	if(l>=r)
		return;
	int m=(l+r)/2;
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	merge(a,l,m,r);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	mergesort(a,0,n-1);
	cout<<endl;
	for(int j=0;j<n;j++)
		cout<<a[j]<<endl;

}