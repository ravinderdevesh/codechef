#include <bits/stdc++.h>
using namespace std ;
typedef unsigned long long ull ;

const int DIV = 1000000007 ;

vector <edge> additional ;
vector <ull> ans ;  //stores number of ways to reach the start of edge i

ull answer ;

class edge {
	public:
		ull l1 , l2 ;
		int m1 , m2 ;
} ;

int exp(int m , int n) {
	if(n == 0)
		return 1 ;
	if(n % 2 == 1)
		return (m * exp(m , n - 1)) % DIV ;
	int c = exp(m , n / 2) ;
	return ((ull)c * (ull)c) % DIV ;
}

int dp(int index) {

}

bool compare(edge& edge1 , edge& edge2) {
	if(edge1.l1 < edge2.l1)
		return true ;
	else if(edge1.l1 == egde2.l1)
		return edge1.l2 <= edge2.l2 ;
	else
		return false ;
}

int main() {
	ull n ;
	int m , k ;
	scanf("%lld %d %d" , &n , &m , &k) ;
	additional.resize(k) ;
	ans.resize(k) ;
	answer = exp(m , n) ;
	for(int i = 0 ; i < k ; i++) {
		scanf("%lld %d %lld %d" , &additional[i].l1 , &additional[i].m1 , &additional[i].l2 , &additional[i].m2) ;
	}
	sort(additional.begin() , additional.end() , compare()) ;

	for(int i = 0 ; i < k ; i++) {
		answer = (answer + dp(i)) % DIV ;
	}
}