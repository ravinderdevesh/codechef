#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int t , n ;
	string s ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%d" , &n) ;
		cin >> s ;
		bool b[n] ;
		//false = not exploded, true = exploded
		for(int i = 0 ; i < n ; i++)
			b[i] = false ;
		
		if(s[0] == '1') {
			b[0] = true ;
			b[1] = true ;
		}
		if(s[n - 1] == '1') {
			b[n - 2] = true ;
			b[n - 1] = true ;
		}
			
		for(int i = 1 ; i < n - 1 ; i++) {
			if(s[i] == '1') {
				b[i - 1] = b[i] = b[i + 1] = true ;
			}
		}
		int count = 0 ;
		for(int i = 0 ; i < n ; i++)
			if(b[i] == false)
				count++ ;
				
		printf("%d\n" , count) ;
	}
}
