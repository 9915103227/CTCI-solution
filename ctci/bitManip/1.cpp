#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;//ASK decimal values;
	int i,j;
	cin>>i>>j;
	int dist=j-i-1;
	int x=(1<<(dist+1))-1;
	x=x<<i;
	x=~x;
	n=n&x;
	m=m<<i;
	n=n|m;
	cout<<n;
	return 0;
}
