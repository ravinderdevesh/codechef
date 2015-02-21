#include <iostream>
#include <stdio.h>
using namespace std ;

int *revenue ;
bool *check ;
int c ;

int cutrod(int *p , int n) {
	if(check[n] == true)
		return revenue[n] ;
	revenue[n] = p[n] ;
	for(int i = 1 ; i < n ; i++) {
		revenue[n] = max(revenue[n] , p[i] + cutrod(p , n - i) - c) ;
		check[n - i] = true ;
	}
	return revenue[n] ;
}

int main() {
	int n ;
	scanf("%d" , &n) ;
	//p[i] gives the revenue obtained from an uncut segment of length i
	int p[n + 1] ;
	//revenue[i] gives the maximum revenue that can be obtained by cutting a rod of length i appropriately
	revenue = new int[n + 1] ;
	check = new bool[n + 1] ;
	check[0] = true ;
	revenue[0] = 0 ;
	for(int i = 1 ; i <= n ; i++) {
		check[i] = false ;
		scanf("%d" , &p[i]) ;
	}
	scanf("%d" , &c) ;
	p[0] = 0 ;
	revenue[n] = cutrod(p , n) ;
	cout << revenue[n] << endl ;
}
