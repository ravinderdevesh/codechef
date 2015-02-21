#include <bits/stdc++.h>
using namespace std ;

//unwieghted graph
class Graph {
	private :
		int V ;
		vector < vector <int> > adj ;
		vector <bool> visited ;

	public :
		Graph(int v) {
			V = v ;
			adj.resize(V) ;
			visited.resize(V) ;
		}
		void addEdge(int u , int v) {
			adj[u].push_back(v) ;
			adj[v].push_back(u) ;
		}
		bool check_cycle(int u , int parent) {
			visited[u] = true ;
			for(int i = 0 ; i < adj[u].size() ; i++) {
				if(visited[adj[u][i]] == false) {
					if(check_cycle(adj[u][i] , u)) {
						return true ;
					}
				}
				else {
					if(adj[u][i] != parent) {
						return true ;
					}
				}
			}
			return false ;
		}
		bool is_cyclic() {
			for(int i = 0 ; i < V ; i++)
				visited[i] = false ;
			for(int i = 0 ; i < V ; i++)
				if(visited[i] == false)
					if(check_cycle(i , -1))
						return true ;
			return false ;
		}
		void print() {
			for(int i = 0 ; i < V ; i++) {
				cout << i << " -> " ;
				for(int j = 0 ; j < adj[i].size() ; j++)
					cout << adj[i][j] << " " ;
				cout << endl ;
			}
		}
} ;

int main() {
	Graph g(5) ;
	g.addEdge(0 , 1) ;
	g.addEdge(0 , 2) ;
	//g.addEdge(2 , 1) ;
	g.addEdge(0 , 3) ;
	g.addEdge(3 , 4) ;
	g.print() ;
	if(g.is_cyclic())
		cout << "CYCLE" << endl ;
	else
		cout << "NO CYCLE" << endl ;
}