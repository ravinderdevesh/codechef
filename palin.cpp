#include <iostream>
#include <stdio.h>
using namespace std ;

void print(char * num , int l) {
	for(int i = l - 1 ; i >= 0 ; i--)
		cout << num[i] ;
	printf("\n") ;
}

bool check(char * num , int l) {
	for(int i = 0 ; i < l / 2 ; i++)
		if(num[i] != num[l - i - 1])
			return false ;
	return true ;
}

void add(char * num , int l) {
	int carry = 1  , i = 0 ;
	for(i = 0 ; i < l ; i++) {
		carry = carry + num[i] - '0' ;
		num[i] = carry % 10 + '0' ;
		carry = carry / 10 ;
	}
	while(carry != 0) {
		num[i] = carry % 10 + '0' ;
		carry = carry / 10 ;
		i++ ;
	}
}

int main() {
	string s ;
	int t ;
	scanf("%d" , &t) ;
	while(t--) {
		cin >> s ;
		char num[1000001] , c ;
		int l = s.length() ;
		for(int i = 0 ; i < l ; i++)
			num[i] = s[l - i - 1] ;
		
		while(true) {
			add(num , l) ;
			if(check(num , l) == true)
				break ;
		}
		print(num , l) ;
	}
}
