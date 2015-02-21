#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;
int main () {
	int n , q , r ;
	unsigned long long m ;
	scanf("%d" , &n) ;
	for(unsigned long long i = n ; ; i++) {
		q = 0 ;
		m = i ;
		while(m > 0) {
			r = m % 10 ;
			q = q * 10 + r ;
			m = m / 10 ;
		}
		if(q == i) {
			bool p = true ;
			for(unsigned long j = 2 ; j <= sqrt(q) ; j++) {
				if(q % j == 0) {
					p = false ;
					break ;
				}
			}
			if(p) {
				printf("%d" , q) ;
				return 0 ;
			}
		}
	}
	
}
