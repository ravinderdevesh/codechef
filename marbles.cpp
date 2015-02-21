#include <iostream>
#include <stdio.h>
using namespace std ;

unsigned long long ncr(unsigned long long n , unsigned long long r) {
	r = min(r , n - r) ;
	if(r == 0)
		return 1 ;
	if(r == 1)
		return n ;
	return (n * ncr(n - 1 , r - 1)) / r ;
}

int main () {
	int t ;
	unsigned long long k , n ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%lld" , &n) ;
		scanf("%lld" , &k) ;
		unsigned long long res = ncr(n - 1 , k - 1) ;
		printf("%lld\n" , res) ;
	}
}
