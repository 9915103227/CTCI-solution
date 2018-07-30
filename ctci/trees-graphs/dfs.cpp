//https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<int> *edge;
public:
	Graph(int v){
		V=v;
		edge=new list<int>[V];
	}
	void addEdge(int u,int v){
		edge[u].push_back(v);
	}
	void print(bool *visited,int s){
		if(!visited[s]){
			cout<<s<<endl;
			visited[s]=true;
			list<int>::iterator itr;
			for(itr=edge[s].begin();itr!=edge[s].end();itr++){
				print(visited,*itr);
			}
		}
	}
	void dfs(int s){
		bool visited[V];
		for(int j=0;j<V;j++)
		{
			visited[j]=false;
		}
		print(visited,s);
	}
};
int main()
{
	Graph g(4);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.dfs(2);
    return 0;
}