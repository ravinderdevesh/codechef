#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;

int main () {
	int t , n ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%d" , &n) ;
		int k = (int)sqrt(n * 1.0) ;
		if(k * k == n) {
			printf("0\n") ;
			continue ;
		}
		for(int i = k ; i >= 1 ; i--)
			if(n % i == 0) {
				int res = n / i - i ;
				printf("%d\n" , res) ;
				break ;
			}
	}
}
