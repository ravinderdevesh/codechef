#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	scanf("%d" , &T) ;
	while(T--) {
		string J , S ;
		cin >> J ;
		cin >> S ;
		int count = 0 ;
		int lj = J.length() ;
		int ls = S.length() ;
		for(int i = 0 ; i < ls ; i++) {
			for(int j = 0 ; j < lj ; j++) {
				if(S[i] == J[j]) {
					count++ ;
					break ;
				}
			}
		}
		printf("%d\n" , count) ;
	}
}
