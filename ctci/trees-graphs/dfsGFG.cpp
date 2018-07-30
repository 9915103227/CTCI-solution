//https://practice.geeksforgeeks.org/problems/nodes-at-even-distance/0
#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<int> *edge;
public:
	Graph(int n){
		V=n+1;
		edge=new list<int>[V];
	}
	void addEdge(int u,int v){
		edge[u].push_back(v);
	}
	void countD(long *dist,bool *visited,int s,long lastDist,long *odd,long *even){
		if(!visited[s]){
			dist[s]=lastDist+1;
			
				if(dist[s]%2==0)
					(*even)=(*even)+1;
				else
					*(odd)=(*odd+1);
			
			list<int>::iterator itr;
			for(itr=edge[s].begin();itr!=edge[s].end();itr++){
				countD(dist,visited,*itr,dist[s],odd,even);
			}
		}
	}
	long dfs(int s,long *dist){
		bool visited[V];
		for(int j=0;j<V;j++)
		{
			visited[j]=false;
		}
		long odd=0,even=0;
		countD(dist,visited,s,-1,&odd,&even);
		return(((even*(even-1))/2)+((odd*(odd-1))/2));
	}
};
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Graph g(n);
		int flag=0;
		int firstNode;
		for(int j=1;j<=(n-1);j++){
			int u,v;
			cin>>u>>v;
			if(flag==0)
			{
			    flag=1;
			    firstNode=u;
			}
			g.addEdge(u,v);
		}
		long dist[n+1];
		for(int j=0;j<=n;j++)
		{
			dist[j]=0;
		}
		cout<<g.dfs(firstNode,dist)<<endl;
		/*cout<<endl;
		for(int j=1;j<=n;j++)
			cout<<dist[j]<<endl;*/
	}
	return 0;
}