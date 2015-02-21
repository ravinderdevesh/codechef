#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;

int main () {
	int t , p , s ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%d" , &p) ;
		scanf("%d" , &s) ;
		double V = (p * s) / 72.0 + (24 * s - p * p) * (p - sqrt(p * p - 24 * s)) / (12 * 72.0) ;
		printf("%.2f\n" , V) ;
	}
}
