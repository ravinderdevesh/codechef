#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	unsigned long long n ;
	scanf("%lld" , &n) ;
	int a[n] , b[n] ;
	for(unsigned long long i = 0 ; i < n ; i++) {
		scanf("%d" , &a[i]) ;
		b[i] = 1 ;
	}
	
	for(unsigned long long i = 0 ; i < n ; i++) {
		for(unsigned long long j = 0 ; j < i ; j++) {
			if(a[i] > a[j]) {
				if(b[j] + 1 > b[i])
					b[i] = b[j] + 1 ;
			}
		}
	}
	
	int max = b[0] ;
	for(unsigned long long i = 1 ; i < n ; i++)
		if(b[i] > max)
			max = b[i] ;
	cout << max << endl ;
}
