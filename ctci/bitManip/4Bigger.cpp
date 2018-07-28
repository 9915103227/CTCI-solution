#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=n;
	int c1=0,c0=0,p;
	while(((a&1)==0)&&(a!=0)){
		c0++;
		a=a>>1;
	}
	while(a>0&&((a&1)==1)){
		c1++;
		a=a>>1;
	}
	cout<<a<<endl;
	/*if(a==0)
	{
		n=n<<1;
		cout<<n;
		return 0;
	}*/	
	p=c0+c1;
	n=n|(1<<p);
	n=n&(~((1<<p)-1));
	n=n|((1<<(c1-1))-1);
	cout<<n;
	return 0;
}
