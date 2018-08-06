#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        int l;
        getline(cin,s);
        while(s.length()==0)
            getline(cin,s);
        //cout<<s<<endl<<s.length()<<endl;
        cin>>l;
        int space=0;
        int len=s.length();
        for(int j=0;j<len;j++){
            if(s[j]==' '){
                space++;
            }
            else{
                for(int k=0;k<space;k++)
                {
                    cout<<"%20";
                }
                cout<<s[j];
                space=0;
            }
        }
        cout<<"\n";
    }
    return 0;
}