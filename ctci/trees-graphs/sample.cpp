#include<bits/stdc++.h>
using namespace std;
void func2(stack<int> *st){
	(*st).push(3);
}
void func(stack<int> *st){
	(*st).push(1);
	(*st).push(2);
	func2(st);
}
int main()
{
	stack<int> st;
	func(&st);
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}