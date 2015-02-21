#include <iostream>
using namespace std ;

int main () {
	int t ;
	cin >> t ;
	while(t--) {
		int k ;
		cin >> k ;
		string s = "" ;
		char c = 97 ;
		for(int i = 0 ; i <= k ; i++) {
			if(c > 122) {
				s = 'a' + s ;
				c = 98 ;
			}
			s = c + s ;
			c++ ;
		}
		cout << s << endl ;
	}
}
