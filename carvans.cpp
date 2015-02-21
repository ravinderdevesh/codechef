#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	scanf("%d" , &T) ;
	int N ;
	while(T--) {
		scanf("%d" , &N) ;
		int * a = new int[N] ;
		for(int i = 0 ; i < N ; i++)
			scanf("%d" , &a[i]) ;
		int min = a[0] ;
		int count = 1 ;
		for(int i = 1 ; i < N ; i++) {
			if(a[i] <= min) {
				min = a[i] ;
				count++ ;
			}
			if(a[i] == 1)
				break ;
		}
		printf("%d\n" , count) ;
	}
}
