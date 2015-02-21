#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T , K , N ;
	unsigned long long A ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &N) ;
		int a[N] ;
		for(int i = 0 ; i < N ; i++)
			scanf("%d" , &a[i]) ;
		scanf("%d" , &K) ;
		K-- ;
		int count = 0 ;
		for(int i = 0 ; i < N ; i++) {
			if(a[K] > a[i])
				count++ ;
		}
		count++ ;
		printf("%d\n" , count) ;
	}
}
