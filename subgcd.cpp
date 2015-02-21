#include <iostream>
#include <stdio.h>
using namespace std ;

int gcd(int a , int b) {
	int c ;
	while (a != 0) {
		c = a ; 
		a = b % a ;
		b = c;
	}
	return b;
}

int main() {
	int t , n ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%d" , &n) ;
		int a[n] ;
		for(int i = 0 ; i < n ; i++)
			scanf("%d" , &a[i]) ;
		bool found = false ;
		for(int i = 0 ; i < n ; i++) {
			for(int j = i ; j < n ; j++)
				if(gcd(a[i] , a[j]) == 1) {
					printf("%d\n" , n) ;
					found = true ;
					break ;
				}
			if(found)
				break ;
		}
		if(!found)
			printf("-1\n") ;
	}
}
