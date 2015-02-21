#include <iostream>
#include <stdio.h>
using namespace std ;
int main () {
	int n ;
	scanf("%d" , &n) ;
	int lines ;
	int a[100][100] ;
	for(int i = 0 ; i < n ; i++) {
		int res = 0 ;
		scanf("%d" , &lines) ;
		for(int x = 0 ; x < lines ; x++) {
			for(int y = 0 ; y <= x ; y++)
				scanf("%d" , &a[x][y]) ;
		}
		for(int x = lines - 2 ; x >= 0 ; x--) {
			for(int y = 0 ; y <= x ; y++) {
				a[x][y] = a[x][y] + max(a[x + 1][y] , a[x + 1][y + 1]) ;
			}
		}
		printf("%d\n" , a[0][0]) ;
	}
}
