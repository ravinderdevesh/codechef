#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std ;

int main () {
	int T , N , var ;
	int V , C ;
	scanf("%d" , &T) ;
	
	for(int i = 0 ; i < T ; i++) {
		scanf("%d" , &N) ;
		vector <int> A(10001 , 0) ;
		for(int j = 0 ; j < N ; j++) {
			scanf("%d" , &var) ;
			A[var]++ ;
		}
		V = 0 , C = A[0] ;
		for(int j = 1 ; j < 10001 ; j++)
			if(A[j] > C) {
				V = j ;
				C = A[j] ;
			}
		cout << V << " " << C << "\n" ;
	}
}
