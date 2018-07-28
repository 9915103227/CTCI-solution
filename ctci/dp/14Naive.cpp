#include<bits/stdc++.h>
using namespace std;
int F(int *,char *,int,int);
int T(int *operand,char *op,int l,int r){
	//cout<<"T "<<l<<" "<<r<<endl;
	if(l==r){
		return operand[l];
	}
	if(l==(r-1)){
		if(op[l]=='&'){
			if((operand[l]==1)&&(operand[r]==1))
			{
				//cout<<1<<endl;
				return 1;
			}
			else{
				//cout<<0<<endl;
				return 0;
			}
		}
		if(op[l]=='|'){
			if((operand[l]==1)||(operand[r]==1)){
				//cout<<1<<endl;
				return 1;
			}
			else{
				//cout<<0<<endl;
				return 0;
			}
		}
		if(((operand[l]==1)&&(operand[r]==0))||((operand[l]==0)&&(operand[r]==1))){
			//cout<<1<<endl;
			return 1;
		}
		else{
			//cout<<0;
			return 0;
		}
	}
	int s=0;
	for(int j=l;j<r;j++)
	{
		if(op[j]=='&'){
			s+=(T(operand,op,l,j)*T(operand,op,j+1,r));
		}
		if(op[j]=='|')
		{
			s+=((T(operand,op,l,j)*T(operand,op,j+1,r))+(T(operand,op,l,j)*F(operand,op,j+1,r))+(F(operand,op,l,j)*T(operand,op,j+1,r)));
		}
		if(op[j]=='^'){
			s+=((T(operand,op,l,j)*F(operand,op,j+1,r))+(F(operand,op,l,j)*T(operand,op,j+1,r)));
		}
	}
	return s;
}
int F(int *operand,char *op,int l,int r){
	//cout<<"F "<<l<<" "<<r<<endl;
	if(l==r)
	{
		if(operand[l]==1)
			return 0;
		else
			return 1;
	}
	if(l==(r-1)){
		if(op[l]=='&'){
			if((operand[l]==1)&&(operand[r]==1))
			{
				//cout<<0<<endl;
				return 0;
			}
			else{
				//cout<<1<<endl;
				return 1;
			}
		}
		if(op[l]=='|'){
			if((operand[l]==1)||(operand[r]==1)){
				//cout<<0<<endl;
				return 0;
			}
			else{
				//cout<<1<<endl;
				return 1;
			}
		}
		if(((operand[l]==1)&&(operand[r]==0))||((operand[l]==0)&&(operand[r]==1))){
			//cout<<0<<endl;
			return 0;
		}
		else{
			//cout<<1<<endl;
			return 1;
		}
	}
	int s=0;
	for(int j=l;j<r;j++)
	{
		if(op[j]=='&'){
			s+=((F(operand,op,l,j)*F(operand,op,j+1,r))+(T(operand,op,l,j)*F(operand,op,j+1,r))+(F(operand,op,l,j)*T(operand,op,j+1,r)));
			//s+=(T(operand,op,l,j)*T(operand,op,j+1,r));
		}
		if(op[j]=='|')
		{
			s+=(F(operand,op,l,j)*F(operand,op,j+1,r));
			//s+=((T(operand,op,l,j)*T(operand,op,j+1,r))+(T(operand,op,l,j)*F(operand,op,j+1,r))+(F(operand,op,l,j)*T(operand,op,j+1,r)));
		}
		if(op[j]=='^'){
			s+=((T(operand,op,l,j)*T(operand,op,j+1,r))+(F(operand,op,l,j)*F(operand,op,j+1,r)));
			//s+((T(operand,op,l,j)*F(operand,op,j+1,r))||(F(operand,op,l,j)*T(operand,op,j+1,r)));
		}
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int len;
		cin>>len;
		string s;
		cin>>s;
		int operand[len/2+1];
		char op[len/2];
		for(int j=0;j<len;j++)
		{
			if(j%2==0)
			{
				if(s[j]=='T')
					operand[j/2]=1;
				else
					operand[j/2]=0;
			}else{
				op[j/2]=s[j];
			}
		}
		cout<<T(operand,op,0,len/2);
		//for(int j=0;j<=len/2;j++)
			//cout<<operand[j]<<endl;
		//for(int j=0;j<len/2;j++)
			//cout<<op[j]<<endl;
	}
}