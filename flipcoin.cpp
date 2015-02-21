#include <iostream>
#include <stdio.h>
using namespace std ;

void flip(int node , int a , int b , int i , int j , int * m) {
	if(b < i || a > j) {
		return ;
	}
	if(a <= i && b >= j) {
		if(m[node] == 0) {
			m[node] = 1 ;
		}
		else if(m[node] == 1) {
			m[node] = 0 ;
		}
		else {
			flip(2 * node , a , b , i , (i + j) / 2 , m) ;
			flip(2 * node + 1 , a , b , (i + j) / 2 + 1 , j , m) ;
			if(m[2 * node] == m[2 * node + 1])
				m[node] = m[2 * node] ;
			else
				m[node] = -1 ;
		}
	}
	else {
		flip(2 * node , a , b , i , (i + j) / 2 , m) ;
		flip(2 * node + 1 , a , b , (i + j) / 2 + 1 , j , m) ;
		if(m[2 * node] == m[2 * node + 1])
			m[node] = m[2 * node] ;
		else
			m[node] = -1 ;
	}
}

int count(int node , int a , int b , int i , int j , int * m) {
	if(b < i || a > j) {
		return 0 ;
	}
	if(a <= i && b >= j) {
		if(m[node] == 0)
			return 0 ;
		else if(m[node] == 1)
			return j - i + 1 ;
		else {
			return count(2 * node , a , b , i , (i + j) / 2 , m) + count(2 * node + 1 , a , b , (i + j) / 2 + 1 , j , m) ;
		}
	}
	else {
		return count(2 * node , a , b , i , (i + j) / 2 , m) + count(2 * node + 1 , a , b , (i + j) / 2 + 1 , j , m) ;
	}
}

int main () {
	int n , q , a , b , t ;
	scanf("%d" , &n) ;
	scanf("%d" , &q) ;
	int p[n] ;
	for(int i = 0 ; i < n ; i++)
		p[i] = 0 ;
	int m[2 * n] ;
	for(int i = 1 ; i <= 2 * n ; i++)
		m[i] = 0 ;

	while(q--) {
		scanf("%d" , &t) ;
		scanf("%d" , &a) ;
		scanf("%d" , &b) ;
		if(t == 0) {
			flip(1 , a , b , 0 , n - 1 , m) ;
		}
		else {
			int c = count(1 , a , b , 0 , n - 1 , m) ;
			printf("%d\n" , c) ;
		}
	}
}
