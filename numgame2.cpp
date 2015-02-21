#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	unsigned long long N ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%lld" , &N) ;
		if(N % 4 == 1)
			printf("ALICE\n");
		else
			printf("BOB\n") ;
	}
}
