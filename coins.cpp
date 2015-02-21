#include <iostream>
#include <stdio.h>
using namespace std ;

int a[100001] ;

unsigned long long amount(unsigned long long n) {
	if(n < 10001)
		return a[n] ;
	return amount(n / 2) + amount(n / 3) + amount(n / 4) ;
}

int main () {
	for(int i = 1 ; i < 12 ; i++)
		a[i] = i ;
	for(int i = 12 ; i < 10001 ; i++)
		a[i] = a[i / 2] + a[i / 3] + a[i / 4] ;
	unsigned long long n ;
	while(cin >> n) {
		printf("%lld\n" , amount(n)) ;
	}
}
