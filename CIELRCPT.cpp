#include <iostream>
#include <stdio.h>
#include <limits>
using namespace std ;

int main () {
	int T , p ;
	
	scanf("%d" , &T) ;
	int a[] = {1 , 2 , 4 , 8 , 16 , 32 , 64 , 128 , 256 , 512 , 1024 , 2048} ;
	
	while(T--) {
		scanf("%d" , &p) ;
		int b[p + 1] ;
		b[0] = 0 ;
		b[1] = 1 ;
		for(int i = 2 ; i < p + 1 ; i++)
			b[i] = numeric_limits <int> :: max(); 
		for(int i = 2 ; i <= p ; i++) {
			for(int j = 0 ; j < 12 ; j++) {
				if(a[j] <= i)
					if(b[i - a[j]] + 1 < b[i])
						b[i] = b[i - a[j]] + 1 ;
			}
		}
		printf("%d\n" , b[p]) ;
	}
}
