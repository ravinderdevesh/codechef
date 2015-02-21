#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std ;

int main () {
	int t , n , m ;
	scanf("%d" , &t) ;
	
	for(int i = 0 ; i < t ; i++) {
		scanf("%d" , &n) ;
		scanf("%d" , &m) ;
		int notes[n] ;
		
		for(int j = 0 ; j < n ; j++)
			cin >> notes[j] ;
		
		int z = pow(2.0 , n) ;
		
		bool found = false ;
		for(int j = 1 ; j < z ; j++) {
			int sum = 0 ;
			for(int k = 0 ; k < n ; k++) {
				if((j & (1 << k)) > 0)
					sum = sum + notes[k] ;
			}
			if(sum == m) {
				cout << "Yes\n" ;
				found = true ;
				break ;
			}
		}
		if(!found)
			cout << "No\n" ;
	}
}
