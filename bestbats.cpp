#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std ;

int main () {
	int T , scores[11] , k ;
	scanf("%d" , &T) ;
	while(T--) {
		int res = 0 ;
		for(int i = 0 ; i < 11 ; i++)
			scanf("%d" , &scores[i]) ;
		scanf("%d" , &k) ;
		sort(scores , scores + 11) ;
		int sum = 0 ;
		for(int i = 0 ; i < k ; i++)
			sum = sum + scores[10 - i] ;
		for(int i = 1 ; i <= 2047 ; i++) {
			int count = 0 , p = 1 , sum1 = 0 ;
			for(int j = 0 ; j < 11 ; j++) {
				if((p & i) != 0) {
					count++ ;
					sum1 = sum1 + scores[j] ;
				}
				p = p << 1 ;
			}
			if(sum1 == sum && count == k)
				res++ ;
		}
		printf("%d\n" , res) ;
	}
}
