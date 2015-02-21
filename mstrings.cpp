#include <iostream>
#include <stdio.h>
using namespace std ;

bool check(string s) {
	int l = s.length() ;
	for(int i = 0 ; i < l ; i++) {
		for(int j = i ; j < l ; j++) {
			string s1 = s.substr(i , j - i + 1) ;
			string s2 ;
			for(int k = 0 ; k < s1.length() ; k++)
				s2 = s1[k] + s2 ;
			size_t found = s.find(s2) ;
			if(found == string :: npos)
				return false ;
		}
	}
	return true ;
}

int main() {
	string s ;
	int t ;
	scanf("%d" , &t) ;
	while(t--) {
		cin >> s ;
		if(check(s))
			printf("YES\n") ;
		else
			printf("NO\n") ;
	}
}
