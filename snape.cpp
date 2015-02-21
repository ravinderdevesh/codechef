#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;

int main () {
	int T ;
	scanf("%d" , &T) ;
	int b , ls ;
	double rs_max , rs_min ;
	while(T--) {
		scanf("%d" , &b) ;
		scanf("%d" , &ls) ;
		rs_max = sqrt(ls * ls + b * b) ;
		rs_min = sqrt(ls * ls - b * b) ;
		printf("%f " , rs_min) ;
		printf("%f\n" , rs_max) ;
	}
}
