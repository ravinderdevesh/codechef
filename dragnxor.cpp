#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	int n , a , b , r ;
	int count_a ; //store count of 0 in a
	int count_b ; //store count of 1 in b
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &n) ;
		scanf("%d" , &a) ;
		scanf("%d" , &b) ;
		int j = 1 ;
		count_a = count_b = 0 ;
		for(int i = 0 ; i < n ; i++) {
			if((j & a) == 0)
				count_a++ ;
			if((j & b) != 0)
				count_b++ ;
			j = j << 1 ;
		}
		int res = 1 , k ;
		if(count_a >= count_b)
			k = count_b + (n - count_a) ;
		else
			k = (count_a + n - count_b) ;
			
		for(int i = 0 ; i < k ; i++)
			res = (res << 1) ;
		res-- ;
		for(int i = 0 ; i < n - k ; i++)
			res = res << 1 ;
		printf("%d\n" , res) ;
	}
}
