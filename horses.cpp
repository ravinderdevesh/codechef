#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std ;

int main () {
	int T , N ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &N) ;
		unsigned long long a[N] ;
		for(int i = 0 ; i < N ; i++) {
			scanf("%lld" , &a[i]) ;
		}
		sort(a , a + N) ;
		unsigned long long min = a[1] - a[0] ;
		for(int i = 2 ; i < N ; i++)
			if(a[i] - a[i - 1] < min)
				min = a[i] - a[i - 1] ;
		printf("%lld\n" , min) ;
	}
}
