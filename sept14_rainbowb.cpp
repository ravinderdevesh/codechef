#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;
unsigned long long x = -1 ;
unsigned long long res(unsigned long long n) {
	unsigned long long t = 1000000007 ;
	unsigned long long a[] = {n + 1 , n + 2 , n + 3 , n + 4 , n + 5 , n + 6} ;
	int count2 = 4 , count3 = 2 , count5 = 1 ;
	for(int j = 0 ; j < 6 ; j++) {
		for(int i = count2 ; i > 0 ; i--) {
			int p = pow(2.0 , i) ;
			if(a[j] % p == 0 && p != 1) {
				//cout << "divided " << a[j] << " by " << p << endl ;
				a[j] = a[j] / p ;
				count2 = count2 - i ;
				break ;
			}
		}
		for(int i = count3 ; i > 0 ; i--) {
			int p = pow(3.0 , i) ;
			if(a[j] % p == 0 && p != 1) {
				//cout << "divided " << a[j] << " by " << p << endl ;
				a[j] = a[j] / p ;
				count3 = count3 - i ;
				break ;
			}
		}
		for(int i = count5 ; i > 0 ; i--) {
			int p = pow(5.0 , i) ;
			if(a[j] % p == 0 && p != 1) {
				//cout << "divided " << a[j] << " by " << p << endl ;
				a[j] = a[j] / p ;
				count5 = count5 - i ;
				break ;
			}
		}
	}
	//for(int i = 0 ; i < 6 ; i++)
		//cout << a[i] << " " ;
	//cout << endl ;
	unsigned long long p = a[4] * a[5] ;
	unsigned long long b = a[3] * a[2] ;
	unsigned long long r = ((p % t) * (b % t)) % t ;
	unsigned long long c = a[1] * a[0] ;
	c = c % t ;
	return ((r * c) % t) ;
}

int main () {
	unsigned long long N ;
	scanf("%lld" , &N) ;
	if(N < 13) {
		printf("0\n") ;
	}
	else {
		N = N - 13 ;
		N = N / 2 ;
		//cout << "N : " << N << endl ;
		printf("%lld\n" , res(N)) ;
	}
}
