#include <iostream>
#include <stdio.h>
using namespace std ;
int main () {
	unsigned long long n ;
	int t ;
	scanf("%d" , &t) ;
	for(int i = 0 ; i < t ; i++) {
		scanf("%d" , &n) ;
		if(n % 2 == 0)
			printf("%d\n" , n) ;
		else
			printf("%d\n" , (n - 1)) ;
	}
}
