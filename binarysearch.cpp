#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std ;

int main () {
	int n , k ;
	scanf("%d" , &n) ;
	int a[n] ;
	//take values in array
	for(int i = 0 ; i < n ; i++) {
		scanf("%d" , &a[i]) ;
	}
	//sort the array
	sort(a , a + n) ;
	//print the sorted array
	for(int i = 0 ; i < n ; i++) {
		printf("%d\n" , a[i]) ;
	}
	//input element to be searched
	scanf("%d" , &k) ;
	
	//searching part
	int lo = 0 , hi = n - 1 , mid ;
	bool found = false ;
	while(lo <= hi) {
		mid = (lo + hi) / 2 ;
		if(k < a[mid])
			hi = mid - 1 ;
		else if(k > a[mid])
			lo = mid + 1 ;
		else {
			found = true ;
			break ;
		}
	}
	if(found)
		printf("%d\n" , mid) ;
	else
		printf("-1\n") ;
}
