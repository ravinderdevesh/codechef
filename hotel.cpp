#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int T ;
	int N ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &N) ;
		int arrival[N] , departure[N] ;
		int min_arrival = 1000 , max_departure = 1 ;
		for(int i = 0 ; i < N ; i++) {
			scanf("%d" , &arrival[i]) ;
			if(arrival[i] < min_arrival)
				min_arrival = arrival[i] ;
		}
		for(int i = 0 ; i < N ; i++) {
			scanf("%d" , &departure[i]) ;
			if(departure[i] > max_departure)
				max_departure = departure[i] ;
		}
		
		int max = 1 ;
		int count = 0 ;
		for(float i = min_arrival ; i <= max_departure ; i = i + 0.5) {
			count = 0 ;
			for(int j = 0 ; j < N ; j++) {
				if(arrival[j] < i && departure[j] > i)
					count++ ;
			}
			if(count > max)
				max = count ;
		}
		printf("%d\n" , max) ;
	}
}
