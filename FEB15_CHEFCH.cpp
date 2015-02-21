#include <bits/stdc++.h>
using namespace std ;

string s ;

int main() {
	int T ;
	scanf("%d" , &T) ;
	while(T--) {
		cin >> s ;
		int cplus = 0 , cminus = 0 ;
		for(int i = 0 ; i < s.length() ; i++) {
			if(i % 2 == 0) {
				if(s[i] == '-')
					cplus++ ;
			}
			else {
				if(s[i] == '+')
					cplus++ ;
			}
		}
		for(int i = 0 ; i < s.length() ; i++) {
			if(i % 2 == 0) {
				if(s[i] == '+')
					cminus++ ;
			}
			else {
				if(s[i] == '-')
					cminus++ ;
			}
		}
		printf("%d\n" , min(cplus , cminus)) ;
	}
}