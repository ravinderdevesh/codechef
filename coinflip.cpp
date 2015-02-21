#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T , G , I , Q ;
	unsigned long long N ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &G) ;
		while(G--) {
			scanf("%d" , &I) ;
			scanf("%lld" , &N) ;
			scanf("%d" , &Q) ;
			if(I == 1) { //starting with all heads
				if(Q == 1) //elephant wants number of heads
					printf("%lld\n" , (N / 2)) ;
				else //elephant wants number of tails
					printf("%lld\n" , (N - (N / 2))) ;
			}
			else { //staring with all tails
				if(Q == 1) //elephant wants number of heads
					printf("%lld\n" , (N - (N / 2))) ;
				else //elephant wants number of tails
					printf("%lld\n" , (N / 2)) ;
			}
		}
	}
}
