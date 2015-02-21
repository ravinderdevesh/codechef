#include <iostream>
#include <stdio.h>
using namespace std ;

int main () {
	int A , B ;
	scanf("%d" , &A) ;
	scanf("%d" , &B) ;
	int R ;
	R = A - B ;
	if(A < B)
		R = (-1) * R ;
	
	if(R % 10 == 9)
		R = R - 1 ;
	else
		R = R + 1 ;
	printf("%d" , R) ;
}
