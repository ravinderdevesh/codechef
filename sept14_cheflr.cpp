#include <iostream>
#include <stdio.h>
#include <string>
using namespace std ;

int main () {
	int n = 1000000007 ;
	int T ;
	scanf("%d" , &T) ;
	string s ;
	while(T--) {
		cin >> s ;
		unsigned long long res = 1 ;
		for(int i = 0 ; i < s.length() ; i++) {
			if(i % 2 == 0) {
				if(s[i] == 'l')
					res = (2 * (res % n)) % n ;
				else
					res = (2 * ((res + 1) % n)) % n ;
			}
			else {
				if(s[i] == 'l')
					res = (res % n + (res - 1) % n) % n ;
				else
					res = (res % n + (res + 1) % n) % n ;
			}
		}
		printf("%lld\n" , res) ;
	}
}
