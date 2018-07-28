#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int prev=0;
	int curr=0;
	int maxC=0;
	int flag=0;
	while(n>0){
		if(flag==0){
			flag=1;
			cout<<curr<<" "<<prev<<" "<<maxC<<endl;
			if((curr+prev+1)>maxC){
				maxC=(curr+prev+1);
			}
			prev=curr;
			curr=0;
		}
		if(n&1){
			curr++;
		}
		else
		{
			flag=0;
		}
		n=n>>1;
	}
	if((curr+1+prev)>maxC)
		maxC=(curr+1+prev);
	cout<<maxC;
	return 0;
}
