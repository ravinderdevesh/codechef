#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int t , k ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%d" , &k) ;
		int a[k] ;
		for(int i = 0 ; i < k ; i++)
			scanf("%d" , &a[i]) ;
		int branches = 1 ;
		bool r = true ;
		for(int i = 0 ; i < k - 1 ; i++) {
			if(branches < a[i]) {
				r = false ;
				printf("No\n") ;
				break ;
			}
			branches = 2 * (branches - a[i]) ;
		}
		if(r == true) {
			if(branches == a[k - 1])
				printf("Yes\n") ;
			else
				printf("No\n") ;
		}
	}
}
