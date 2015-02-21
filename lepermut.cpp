#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T , n ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &n) ;
		int a[n] ;
		int local = 0 ;
		scanf("%d" , &a[0]) ;
		for(int i = 1 ; i < n ; i++) {
			scanf("%d" , &a[i]) ;
			if(a[i] < a[i - 1])
				local++ ;
		}
		int inv = 0 ;
		for(int i = 0 ; i < n - 1 ; i++) {
			for(int j = i + 1 ; j < n ; j++) {
				if(a[i] > a[j])
					inv++ ;
			}
		}
		if(inv == local)
			printf("YES\n") ;
		else
			printf("NO\n") ;
	}
}
