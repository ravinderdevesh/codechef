#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;
int main () {
	unsigned long n ;
	scanf("%ld" , &n) ;
	for(unsigned int i = sqrt(n) ; i > 1 ; i--) {
		if(n % i == 0) {
			bool p = true ;
			for(int j = 2 ; j <= sqrt(i) ; j++) {
				if(i % j == 0) {
					p = false ;
					break ;
				}
			}
			if(p == true) {
				cout << i << endl ;
				return 0 ;
			}
		}
	}
}
