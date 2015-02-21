#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	int a , b ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &a) ;
		scanf("%d" , &b) ;
		printf("%d %d\n" , max(a , b) , (a + b)) ;
	}
}
