#include <bits/stdc++.h>
using namespace std ;
 
unsigned long long n , m ;
 
unsigned long long solve(unsigned long long p , vector <unsigned long long>& precompute) {
	unsigned long long ans = 0 ;
	unsigned long long j ;
	if(p % 2 == 0)
		j = ((((p % m) * ((p / 2) % m)) % m) * ((p + 1) % m)) % m ;
	else
		j = (((((p % m) * (p % m)) % m) % m) * (((p + 1) / 2) % m)) % m ;
	j = j % m ;
	if(p + 1 < m)
		ans = ((precompute[p + 1] + j) % m + m - 1) % m ;
	else
		ans = (j % m + m - 1) % m ;
	return ans ;
}

int min(int a , int b) {
	if(a>b)
		return a;
	return b;
}

int main() {
	scanf("%lld %lld" , &n , &m) ;
	vector <unsigned long long> precompute(m) ;
	precompute[0] = 0 ;
	precompute[1] = 1 % m ;

	for(unsigned long long i = 2 ; i < m ; i++)
		precompute[i] = (precompute[i - 1] * i) % m ;

	vector <unsigned long long> p(n) ;
	unsigned long long ans = 0 ;

	for(unsigned long long i = 0 ; i < n ; i++) {
		scanf("%lld" , &p[i]) ;
		unsigned long long t = solve(p[i] , precompute) ;
		ans = (ans + t) % m ;
	}
	printf("%lld\n" , ans) ;
}
 
 
