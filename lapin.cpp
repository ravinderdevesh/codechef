#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	string s ;
	int l ;
	int a[26] , b[26] ;
	scanf("%d" , &T) ;
	while(T--) {
		cin >> s ;
		
		for(int i = 0 ; i < 26 ; i++) {
			a[i] = b[i] = 0 ;
		}
		
		l = s.length() ;
		for(int i = 0 ; i < (l / 2) ; i++) {
			a[(int)(s[i] - 'a')]++ ;
			b[(int)(s[l - i - 1] - 'a')]++ ;
		}
		bool t = true ;
		for(int i = 0 ; i < 26 ; i++) {
			if(a[i] != b[i]) {
				t = false ;
				break ;
			}
		}
		if(t)
			printf("YES\n") ;
		else
			printf("NO\n") ;
	}
}
