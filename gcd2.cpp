#include <iostream>
#include <stdio.h>
using namespace std ;
 
int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b,a % b);
}
 
int main () {
	unsigned long T ;
	scanf("%ld" , &T) ;
	int A ;
	double B ;
	while(T--) {
		scanf("%d" , &A) ;
		scanf("%lf" , &B) ;
		printf("%d\n" , gcd(B , A)) ;
	}
}
