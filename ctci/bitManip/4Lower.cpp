#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=n;
	int c1=0,c0=0,p;
	while(((a&1)==1)){
		c1++;
		a=a>>1;
	}
	while((a!=0)&&((a&1)==0)){
		c0++;
		a=a>>1;
	}
	c1++;
	p=c0+c1;
	
	//n=n&(~(1<<p));
	n=n&(~((1<<p)-1));
	cout<<p<<endl;
	cout<<n<<endl;
	n=n|(((1<<c1)-1)<<(c0-1));
	cout<<n;
	return 0;
}
