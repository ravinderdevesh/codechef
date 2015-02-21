#include <bits/stdc++.h>
using namespace std ;

//unwieghted graph
class Graph {
	private :
		int V ;
		vector < vector <int> > adj ;
		vector <bool> visited ;
		vector <bool> recursion_stack ;

	public :
		Graph(int v) {
			V = v ;
			adj.resize(V) ;
			visited.resize(V) ;
			recursion_stack.resize(V) ;
		}
		void addEdge(int u , int v) {
			adj[u].push_back(v) ;
		}
		bool check_cycle(int u) {
			visited[u] = true ;
			recursion_stack[u] = true ;
			for(int i = 0 ; i < adj[u].size() ; i++) {
				if(visited[adj[u][i]] == false) {
					if(check_cycle(adj[u][i])) {
						return true ;
					}
				}
				else {
					if(recursion_stack[adj[u][i]] == true) {
						return true ;
					}
				}
			}
			recursion_stack[u] = false ;
			return false ;
		}
		bool is_cyclic() {
			for(int i = 0 ; i < V ; i++) {
				recursion_stack[i] = false ;
				visited[i] = false ;
			}
			for(int i = 0 ; i < V ; i++)
				if(visited[i] == false)
					if(check_cycle(i))
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
	Graph g(4);
    g.addEdge(0, 1);
    //g.addEdge(0, 2);
    g.addEdge(1, 2);
    //g.addEdge(2, 0);
    g.addEdge(2, 3);
    //g.addEdge(3, 3);
	g.print() ;
	if(g.is_cyclic())
		cout << "CYCLE" << endl ;
	else
		cout << "NO CYCLE" << endl ;
}