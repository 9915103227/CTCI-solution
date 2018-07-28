#include<bits/stdc++.h>
using namespace std;
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
		//cout<<T(operand,op,0,len/2);
		int T[len/2+1][len/2+1];
		int F[len/2+1][len/2+1];
		for(int j=0;j<=len/2;j++)
		{
			if(operand[j]==1)
			{
				T[j][j]=1;
				F[j][j]=0;
			}
			else{
				T[j][j]=0;
				F[j][j]=1;
			}
		}
		/*for(int j=0;j<len/2;j++)
		{
			if(op[j]=='&')
			{
				if((operand[l]==1)&&(operand[r]==1)){
					T[j][j+1]=1;
					F[j][j+1]=0;
				}else
				{
					T[j][j+1]=1;
					F[j][j+1]=0;
				}
			}
			if(op[j]=='|'){
				if((operand[j]==1)||(operand[j+1]==1)){
					T[j][j+1]=1;
				}
				else
				{
					T[j][j+1]=0;
				}
			}
			if(op[j]=='^'){
				if(((operand[j]==1)&&(operand[j+1]==0))||((operand[j]==0)&&(operand[j+1]==1))){
					T[j][j+1]=1;
				}
				else
				{
					T[j][j+1]=0;
				}
			}
			if(T[j][j+1]==1)
			{
				F[j][j+1]=0;
			}
			else
			{
				F[j][j+1]=1;
			}
		}*/
		for(int gap =1;gap<=len/2;gap++)
		{
			for(int j=0;j<=(len/2-gap);j++)
			{
				int s=0;
				for(int p=j;p<(j+gap);p++)
				{
					if(op[p]=='&'){
						s+=(T[j][p]*T[p+1][j+gap]);
					}
					if(op[p]=='|'){
						s+=((T[j][p]*T[p+1][j+gap])+(T[j][p]*F[p+1][j+gap])+(F[j][p]*T[p+1][j+gap]));
					}
					if(op[p]=='^'){
						s+=((T[j][p]*F[p+1][j+gap])+(F[j][p]*T[p+1][j+gap]));
					}
				}
				T[j][j+gap]=s;
				s=0;
				for(int p=j;p<(j+gap);p++)
				{
					if(op[p]=='&'){
						s+=((F[j][p]*T[p+1][j+gap])+(T[j][p]*F[p+1][j+gap])+(F[j][p]*F[p+1][j+gap]));
					}
					if(op[p]=='|'){
						s+=(F[j][p]*F[p+1][j+gap]);
					}
					if(op[p]=='^'){
						s+=((T[j][p]*T[p+1][j+gap])+(F[j][p]*F[p+1][j+gap]));	
					}
				}
				F[j][j+gap]=s;
			}
		}
		/*for(int j=0;j<=len/2;j++)
		{
			for(int k=0;k<=len/2;k++)
				cout<<T[j][k]<<" ";
			cout<<endl;
		}
		cout<<endl;
		for(int j=0;j<=len/2;j++)
		{
			for(int k=0;k<=len/2;k++)
				cout<<F[j][k]<<" ";
			cout<<endl;
		}*/
		cout<<T[0][len/2]<<endl;
	}
	return 0;
}