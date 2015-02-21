#include <bits/stdc++.h>
using namespace std ;

int main() {
	int T , n ;
	long long s ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d %lld" , &n , &s) ;
		s = s - n ;
		long long i = 1 ;
		while(true) {
			if((s - (i - 1)) < 0)
				break ;
			s = s - (i - 1) ;
			i++ ;
		}
		printf("%lld\n" , n - i + 1) ;
	}
}