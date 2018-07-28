#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	n=n^m;
	m=0;
	while(n>0){
		if((n&1)==1){
			m++;
		}
		n=n>>1;
	}
	cout<<m;
	return 0;
}
