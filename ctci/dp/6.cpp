#include<bits/stdc++.h>
using namespace std;
void func(int N,int src,int buf,int dst,int *n){
    if(N==0)
    {
        return;
    }
    func(N-1,src,dst,buf,n);
    (*n)--;
    if((*n)==0)
    {
        cout<<src<<" "<<dst<<endl;
        return;
    }
    func(N-1,buf,src,dst,n);
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,N;
        cin>>N>>n;
        int src=1,buf=2,dst=3;
        func(N,src,buf,dst,&n);
    }
}