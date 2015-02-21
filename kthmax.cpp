#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std ;

int kthmax(int * a , int lo , int hi , int * b , int k , int n) {
	int j = lo , z = hi ;
	int p = a[lo] ;
	for(int i = lo ; i <= hi ; i++)
		b[i] = a[i] ;
	for(int i = lo + 1 ; i <= hi ; i++) {
		if(b[i] <= p)
			a[j++] = b[i] ;
		else
			a[z--] = b[i] ;
	}
	a[j] = p ;
	
	if(j == n - k)
		return p ;
	else if(j > n - k) {
		return kthmax(a , lo , j - 1 , b , k , n) ;
	}
	else {
		return kthmax(a , j + 1 , hi , b , k , n) ;
	}
}

int main () {
	srand(time(NULL)) ;
	int n , k ;
	cin >> n ;
	int a[n] , b[n] ;
	for(int i = 0 ; i < n ; i++) {
		a[i] = rand() % 10 ;
	}
	cin >> k ;
	
	cout << kthmax(a , 0 , n - 1 , b , k , n) << endl ;
	sort(a , a + n) ;
	cout << a[n - k] << endl ;
}
