#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	int change=0;
	int i=0,j=0;
	for(;i<l1&&j<l2;)
	{
		if(s1[i]!=s2[j]){
			change++;
			if(s1[i]==s2[j+1])
				j++;
			else{
				if(s2[j]==s1[i+1])
					i++;
				else{
					i++;
					j++;
				}
			}
		}
		else
		{
			i++;
			j++;
		}
	}
	if(i<l1)
		change+=(l1-i);
	if(j<l2)
		change+=(l2-j);
	//cout<<change<<endl;
	if(change<=1)
		cout<<1<<endl;
	else
	{
		cout<<0<<endl;
	}
	return 0;
}