#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	long long N ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%lld" , &N) ;
		long long x ;
		bool found = false ;
		for(long long y = 0 ; N - 4 * y >= 0 ; y++) {
			x = (N - 4 * y) ;
			if(x % 7 == 0) {
				found = true ;
				printf("%lld\n" , (x)) ;
				break ;
			}
		}
		if(found == false)
			printf("-1\n") ;
	}
}
