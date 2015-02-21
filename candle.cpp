#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main () {
	int T ;
	scanf("%d" , &T) ;
	
	while(T--) {
		int a[10] , b[10] ;
		bool done = false ;
		//srand(time(NULL)) ;
		for(int i = 0 ; i < 10 ; i++) {
			scanf("%d" , &a[i]) ;
			if(a[i] == 0 && i != 0) {
				if(!done)
					printf("%d\n" , i) ;
				done = true ;
			}
			b[i] = i ;
		}
		if(done) {
			continue ;
		}
		for(int i = 0 ; i < 10 ; i++) {
			for(int j = 0 ; j < 10 - i - 1 ; j++) {
				if(a[j] > a[j + 1]) {
					int tmp = a[j] ;
					a[j] = a[j + 1] ;
					a[j + 1] = tmp ;
					tmp = b[j] ;
					b[j] = b[j + 1] ;
					b[j + 1] = tmp ;
				}
			}
		}/*
		for(int i = 0 ; i < 10 ; i++) {
			printf("%d " , b[i]) ;
		}
		printf("\n") ;
		
		for(int i = 0 ; i < 10 ; i++) {
			printf("%d " , a[i]) ;
		}
		printf("\n") ;*/
		if(b[0] != 0) {
			for(int i = 0 ; i <= a[0] ; i++)
				printf("%d" , b[0]) ;
			printf("\n") ;
		}
		else {
			if(a[0] == a[1]) {
				for(int i = 0 ; i <= a[0] ; i++)
					printf("%d" , b[1]) ;
				printf("\n") ;
			}
			else {
				printf("1") ;
				for(int i = 0 ; i <= a[0] ; i++)
					printf("0") ;
				printf("\n") ;
			}
		}
	}
}
