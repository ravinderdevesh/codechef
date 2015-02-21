#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	long long int SIZE = 10000000 ;
	int n1 , n2 , n3 ;
	scanf("%d" , &n1) ;
	scanf("%d" , &n2) ;
	scanf("%d" , &n3) ;
	int x ;
	//int l1[SIZE] , l2[SIZE] , l3[SIZE] ;
	int * l1 = new int[SIZE] ;
	int * l2 = new int[SIZE] ;
	int * l3 = new int[SIZE] ;
	for(long long i = 0 ; i < SIZE ; i++) {
		l1[i] =  0 ;
		l2[i] =  0 ;
		l3[i] =  0 ;
	}
	for(int i = 0 ; i < n1 ; i++) {
		scanf("%d" , &x) ;
		l1[x] = 1 ;
	}
	for(int i = 0 ; i < n2 ; i++) {
		scanf("%d" , &x) ;
		l2[x] = 1 ;
	}
	for(int i = 0 ; i < n3 ; i++) {
		scanf("%d" , &x) ;
		l3[x] = 1 ;
	}
	int * l = new int[SIZE] ;
	 long long count = 0 ;
	for(long long i = 0 ; i < SIZE ; i++) {
		if(l1[i] + l2[i] + l3[i] >= 2)
			l[count++] = i ;
	}
	printf("%lld\n" , count) ;
	for(long long i = 0 ; i < count ; i++)
		printf("%d\n" , l[i]) ;
}
