#include <iostream>
#include <stdio.h>
#include <string>
using namespace std ;

int main () {
	string S ;
	int T, l , t , cost ;
	char c ;
	cin >> T ;
	while(T--) {
		cost = 0 ;
		int arr[53] ;
		//arr[1 .. 26] stores ABCD .. Z
		//arr[27 .. 52] stores abcd .. z
		for(int i = 1 ; i < 53 ; i++)
			arr[i] = 0 ;
		cin >> S ;
		l = S.length() ;
		for(int i = 0 ; i < l ; i++) {
			c = S[i] ;
			t = c ;
			if(t >= 65 && t <= 90)
				t = t - 64 ;
			else
				t = t - 70 ;
			arr[t]++ ;
		}
		for(int i = 1 ; i < 53 ; i++) {
			if(arr[i] % 2 == 1)
				arr[i]++ ;
			cost = cost + arr[i] / 2 ;
		}
		printf("%d\n" , cost) ;
	}
}
