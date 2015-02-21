#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T , N ;
	int num1 , num2 , gcd ;
	int r ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &N) ;
		int a[N] ;
		for(int i = 0 ; i < N ; i++)
			scanf("%d" , &a[i]) ;
		
		gcd = a[0] ;
		for(int i = 1 ; i < N ; i++) {
			num1 = max(gcd , a[i]) ;
			num2 = min(gcd , a[i]) ;
			r = num2 ;
			while(r != 0) {
				r = num1 % num2 ;
				num1 = num2 ;
				num2 = r ;
			}
			gcd = num1 ;
		}
		for(int i = 0 ; i < N ; i++)
			printf("%d " , (a[i] / gcd)) ;
		printf("\n") ;
	}
}
