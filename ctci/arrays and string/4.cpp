#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int a[26];
    for(int i=0;i<26;i++)
        a[i]=0;
    for(int i=0;i<len;i++)
    {
        a[s[i]-97]++;
    }
    int odd=0;
    for(int i=0;i<26;i++){
        if(a[i]%2==1)
            odd++;
    }
    if(len%2==1){
        if(odd==1)
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }
    }else{
        if(odd==0)
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}