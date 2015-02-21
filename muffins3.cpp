#include <iostream>
#include <stdio.h>
using namespace std ;
int main () {
	int t ;
	unsigned long long p , r , pmax ;
	scanf("%d" , &t) ;
	unsigned long long n ;
	for(int i = 0 ; i < t ; i++) {
		scanf("%lld" , &n) ;
		printf("%d\n" , ((n / 2) + 1)) ;
	}
}
