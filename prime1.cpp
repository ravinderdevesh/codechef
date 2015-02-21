#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std ;

int main () {
	int k = 32000 ;
	int primes[k] ;
	vector <int> p ;
	for(int i = 2 ; i < k ; i++)
		primes[i] = true ;
	
	for(int i = 2 ; i < k ; i++) {
		if(primes[i]) {
			p.push_back(i) ;
			for(int j = 2 ; j * i < k ; j++)
				primes[j * i] = false ;
		}
	}
	int t , m , n ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%d" , &m) ;
		scanf("%d" , &n) ;
		if(m == 1)
			m++ ;
		for(int i = m ; i <= n ; i++) {
			bool b = true ;
			if(i == 2) {
				printf("%d\n" , i) ;
				continue ;
			}
			if((i % 2) == 0)
				continue ;
			for(int j = 0 ; p[j] <= sqrt(i) && j < p.size() ; j++) {
				if(i % p[j] == 0) {
					b = false ;
					break ;
				}
			}
			if(b)
				printf("%d\n" , i) ;
		}
		if(t != 0)
			printf("\n") ;
	}
}
