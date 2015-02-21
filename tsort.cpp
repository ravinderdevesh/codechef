#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std ;
int main () {
	unsigned long t ;
	scanf("%ld", &t);
	vector<unsigned long> a ;
	unsigned long n ;
	for(unsigned long i = 0 ; i < t ; i++) {
		scanf("%ld", &n);
		a.push_back(n) ;
	}
	sort(a.begin() , a.begin() + a.size()) ;
	for(unsigned long i = 0 ; i < t ; i++)
		printf("%ld\n", a[i]);;
}
