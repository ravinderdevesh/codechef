#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int n ;
	int x1 , y1 , x2 , y2 , x3 , y3 ;
	int a , b , c , count = 0 ;
	scanf("%d" , &n) ;
	while(n--) {
		scanf("%d" , &x1) ;
		scanf("%d" , &y1) ;
		scanf("%d" , &x2) ;
		scanf("%d" , &y2) ;
		scanf("%d" , &x3) ;
		scanf("%d" , &y3) ;
		a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) ;
		b = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) ;
		c = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1) ;
		if(((a + b) == c) || ((b + c) == a) || ((c + a) == b))
			count++ ;
	}
	printf("%d" , count) ;
}
