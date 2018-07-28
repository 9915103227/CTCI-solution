#include<bits/stdc++.h>
using namespace std;
int mult(int smaller,int bigger){
	if(smaller==0)
		return 0;
	if(smaller==1)
		return bigger;
	int s=smaller>>1;
	int x1=mult(s,bigger);
	int x2=x1;
	if(smaller%2==1)
	{
		x2=mult((smaller-s),bigger);
	}
	return(x1+x2);
}
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
	cout<<mult(smaller,bigger)<<endl;
	return 0;
}