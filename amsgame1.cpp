#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std ;

bool check(int * a , int n) {
	int t = a[0] ;
	for(int i = 1 ; i < n ; i++)
		if(a[i] != t)
			return false ;
	return true ;
}

int main () {
	int T , n ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &n) ;
		int a[n] ;
		for(int i = 0 ; i < n ; i++)
			scanf("%d" , &a[i]) ;
		sort(a , a + n) ;
		while(check(a , n) == false) {
			for(int i = n - 1 ; i >= 1 ; i--)
				if(a[i] % a[0] != 0)
					a[i] = a[i] % a[0] ;
				else
					a[i] = a[0] ;
			sort(a , a + n) ;
		}
		printf("%d\n" , a[0]) ;
	}
}
