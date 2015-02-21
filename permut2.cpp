#include <iostream>
#include <stdio.h>
using namespace std ;
int main () {
	int n ;
	while(true) {
		scanf("%d" , &n) ;
		if(n == 0)
			return 0 ;
		int a[n + 1] ;
		for(int i = 1 ; i <= n ; i++)
			scanf("%d" , &a[i]) ;
		bool amb = true ;
		for(int i = 1 ; i <= n ; i++) {
			if(a[a[i]] != i) {
				printf("not ambiguous\n") ;
				amb = false ;
				break ;
			}
		}
		if(amb)
			printf("ambiguous\n") ;
	}
}
