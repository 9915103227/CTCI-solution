#include<bits/stdc++.h>
using namespace std;
int main()
{
	    int t;
	        cin>>t;
		    for(int i=0;i<t;i++)
			        {
					        int n;
						        cin>>n;
							        int a=n&(0xaaaaaaaa);
								        int b=n&(0x55555555);
									        a=a>>1;
										        b=b<<1;
											        a=a|b;
												        cout<<a<<endl;
													    }
		        return 0;
}
