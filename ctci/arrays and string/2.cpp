#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int l1,l2;
        l1=s1.length();
        l2=s2.length();
        if(l1!=l2){
            cout<<"NO\n";
            continue;
        }
        int a[26];
        for(int j=0;j<26;j++)
        {
            a[j]=0;
        }
        for(int j=0;j<l1;j++){
            a[s1[j]-97]++;
        }
        for(int j=0;j<l2;j++)
        {
            a[s2[j]-97]--;
        }
        int flag=1; 
        for(int j=0;j<26;j++)
        {
            if(a[j]!=0){
                //cout<<"NO\n";
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}