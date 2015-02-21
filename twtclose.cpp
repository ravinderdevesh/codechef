#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std ;

int main () {
	int n , k , open_count = 0 ;
	string s ;
	scanf("%d" , &n) ;
	scanf("%d" , &k) ;
	getline(cin , s) ;
	bool a[n + 1] ;
	for(int i = 1 ; i <= n ; i++)
		a[i] = false ;
	for(int i = 0 ; i < k ; i++) {
		getline(cin , s) ;
		if(s == "CLOSEALL") { //closeall
			for(int i = 1 ; i <= n ; i++)
				a[i] = false ;
			open_count = 0 ;
		}
		else {
			string s1 = s.substr(6) ;
			stringstream ss ;
			ss << s1 ;
			int p ;
			ss >> p ;
			if(a[p] == false) {
				a[p] = true ;
				open_count++ ;
			}
			else {
				a[p] = false ;
				open_count-- ;
			}
		}
		printf("%d\n" , open_count) ;
	}
}
