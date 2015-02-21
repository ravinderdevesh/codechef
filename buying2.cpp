#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T , N , X ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &N) ;
		scanf("%d" , &X) ;
		int p , sum = 0 , min = 100 ;
		for(int i = 0 ; i < N ; i++) {
			scanf("%d" , &p) ;
			sum = sum + p ;
			if(p < min)
				min = p ;
		}
		if(sum % X == 0)
			printf("%d\n" , (sum / X)) ;
		else {
			if(min > sum % X) 
				printf("%d\n" , (sum / X)) ;
			else
				printf("-1\n") ;
		}
	}
}
