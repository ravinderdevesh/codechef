#include <bits/stdc++.h>
#include <map>
using namespace std ;

const int UNSOLVED = -1 ;
int n ;
vector <int> k , w ;

int solve(int start , vector <int>& ans) {
	if(start == n - 1)
		return w[start] ;
	if(ans[start] == UNSOLVED) {
		int w1 = solve(start + 1 , ans) ;
		int w2 ;
		if(k[start] != 0)
			w2 = solve(k[start] , ans) + w[start] ;
		else
			w2 = w[start] ;
		ans[start] = max(w1 , w2) ;
	}
	return ans[start] ;
}

int main() {
	scanf("%d" , &n) ;
	vector <int> s(n) , f(n) ;
	map <int , int> times ;
	k.resize(n) ; w.resize(n) ;
	int p = 0 ;
	for(int i = 0 ; i < n ; i++) {
		scanf("%d %d %d" , &s[i] , &f[i] , &w[i]) ;		//assume that the intervals are given in the increasing order of their starting times
		times[s[i]] = i ;
	}
	for(int i = 0 ; i < n ; i++) {
		map <int , int> :: iterator it = times.upper_bound(f[i]) ;
		k[i] = it -> second ;
	}
	vector <int> ans(n , UNSOLVED) ;
	printf("%d\n" , solve(0 , ans)) ;
}