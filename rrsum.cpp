#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	unsigned long long N , M , q ;
	scanf("%lld" , &N) ;
	scanf("%lld" , &M) ;
	while(M--) {
		scanf("%lld" , &q) ;
		if(q <= N) {
			printf("0\n") ;
			continue ;
		}
		else if(q >= (N + 1) && q <= (2 * N + 1))
			printf("%lld\n" , (q - N - 1)) ;
		else
			printf("%lld\n" , (3 * N - q + 1)) ;
	}
}
