#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std ;

int main () {
	int T ;
	int m , n ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &n) ;
		scanf("%d" , &m) ;
		int z ;
		vector <bool> v(n + 1 , false) ;
		for(int i = 0 ; i < m ; i++) {
			scanf("%d" , &z) ;
			v[z] = true ;
		}
		vector <int> chef , assistant ;
		int k = 1 ;
		for(int i = 1 ; i <= n ; i++) {
			if(v[i] == false) {
				if(k == 1) {
					chef.push_back(i) ;
					k = 0 ;
				}
				else {
					assistant.push_back(i) ;
					k = 1 ;
				}
			}
		}
		for(int i = 0 ; i < chef.size() ; i++) {
			printf("%d " , chef[i]) ;
		}
		printf("\n") ;
		for(int i = 0 ; i < assistant.size() ; i++)
			printf("%d " , assistant[i]) ;
		printf("\n") ;
	}
}
