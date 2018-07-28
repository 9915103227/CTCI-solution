#include<bits/stdc++.h>
using namespace std;
int func(int n){
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	return(func(n-1)+func(n-2)+func(n-3));
}
int main()
{
	int n;
	cin>>n;
	cout<<func(n);
	return 0;
}