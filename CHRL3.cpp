#include <bits/stdc++.h>
using namespace std ;

int main() {
	int N ;
	scanf("%d" , &N) ;
	vector <int> data(N) ;
	for(int i = 0 ; i < N ; i++)
		scanf("%d" , &data[i]) ;
	int min_so_far = INT_MAX ;
	int moves_so_far = 0 ;
	for(int i = 0 ; i < N ; i++) {
		if(data[i] < min_so_far) {
			moves_so_far++ ;
			min_so_far = data[i] ;
		}
	}
	printf("%d\n" , moves_so_far) ;
}