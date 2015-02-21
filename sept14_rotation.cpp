#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int N , M ;
	scanf("%d" , &N) ;
	scanf("%d" , &M) ;
	int a[N] ;
	for(int i = 0 ; i < N ; i++) {
		scanf("%d" , &a[i]) ;
	}
	int p = 0 ;
	string s ;
	int x ;
	for(int i = 0 ; i < M ; i++) {
		cin >> s ;
		scanf("%d" , &x) ;
		if(s[0] == 'R') {
			printf("%d\n" , a[(p + x - 1) % N]) ;
		}
		else if(s[0] == 'C') {
			p = (p + x) % N ;
		}
		else {
			int k = p - x ;
			if(k < 0)
				k = k + N ;
			p = k % N ;
		}
	}
}
