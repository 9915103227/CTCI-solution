#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<int> *edges;
public:
	Graph(int n){
		V=n;
		edges=new list<int>[V];
	}
	void addEdge(int u,int v)
	{
		edges[u].push_back(v);
	}
	void bfs(int s){
		bool visited[V];
		for(int j=0;j<V;j++)
		{
			visited[j]=false;
		}
		queue<int> q;
		q.push(s);
		while(!q.empty()){
			int top=q.front();
			if(!visited[top]){
				visited[top]=true;
				cout<<top<<endl;
				q.pop();
				list<int>::iterator it;
				for(it=edges[top].begin();it!=edges[top].end();it++){
					q.push(*it);
				}
			}
			else
			{
				q.pop();
			}
		}
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
    g.bfs(2);
    return 0;
}