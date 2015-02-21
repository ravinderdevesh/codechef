#include <bits/stdc++.h>
using namespace std ;

class Graph {
	private:
		int V ;
		vector < vector <int> > adj , adj_transpose ;
		vector <bool> visited ;
		stack <int> topology ;
	public:
		Graph(int v) {
			V = v ;
			adj.resize(V) ;
			adj_transpose.resize(V) ;
			visited.resize(V) ;
		}
		void addEdge(int u , int v) {
			adj[u].push_back(v) ;
		}
		void transpose() {
			for(int i = 0 ; i < V ; i++) {
				for(int j = 0 ; j < adj[i].size() ; j++)
					adj_transpose[adj[i][j]].push_back(i) ;
			}
		}
		void dfs(int u) {
			visited[u] = true ;
			for(int i = 0 ; i < adj[u].size() ; i++)
				if(!visited[adj[u][i]])
					dfs(adj[u][i]) ;
			topology.push(u) ;
		}
		void connected(int u) {
			cout << u << " " ;
			visited[u] = true ;
			for(int i = 0 ; i < adj_transpose[u].size() ; i++)
				if(!visited[adj_transpose[u][i]])
					connected(adj_transpose[u][i]) ;
		}
		void getSCC() {
			for(int i = 0 ; i < V ; i++)
				visited[i] = false ;
			for(int i = 0 ; i < V ; i++)
				if(!visited[i])
					dfs(i) ;
			for(int i = 0 ; i < V ; i++)
				visited[i] = false ;
			transpose() ;
			int curr ;
			while(topology.empty() == false) {
				curr = topology.top() ;
				topology.pop() ;
				if(!visited[curr]) {
					cout << "SCC of : " << curr << endl ;
					connected(curr) ;
					cout << endl ;
				}
			}
		}
} ;

int main() {
	Graph g(2);
    g.addEdge(0, 1);
    cout << "Following are strongly connected components in given graph \n";
    g.getSCC();
 
    return 0;
}