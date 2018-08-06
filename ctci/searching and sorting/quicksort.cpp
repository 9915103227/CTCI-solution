#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int l,int r){
    int mid=a[(l+r)/2];
    while(l<=r){
        while(l<=r&&a[l]<mid)
            l++;
        while(l<=r&&a[r]>mid)
            r--;
        if(l<=r)
        {
            int t;
            t=a[l];
            a[l]=a[r];
            a[r]=t;
            l++;
            r--;
        }
    }
    return l;
}
void quicksort(int *a,int l,int r){
    int index=partition(a,l,r);
    if(l<(index-1))
        quicksort(a,l,index-1);
    if(index<r)
        quicksort(a,index,r);
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        quicksort(a,0,n-1);
        for(int j=0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl;
    }
    return 0;
}