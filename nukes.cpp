#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;

int main () {
	unsigned long long A ;
	int N , K ;
	scanf("%lld" , &A) ;
	scanf("%d" , &N) ;
	scanf("%d" , &K) ;
	
	unsigned long long a[K] ;
	
	for(int i = 0 ; i < K ; i++) {
		printf("%lld " , A % (N + 1)) ;
		A = A / (N + 1) ;
	}
}
