#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	scanf("%d" , &T) ;
	int N , ak ;
	unsigned long long C ;
	while(T--) {
		scanf("%d" , &N) ;
		scanf("%lld" , &C) ;
		unsigned long long sum = 0 ;
		for(int i = 0 ; i < N ; i++) {
			scanf("%d" , &ak) ;
			sum = sum + ak ;
		}
		if(sum <= C)
			printf("Yes\n") ;
		else
			printf("No\n") ;
	}
}
