#include <bits/stdc++.h>
using namespace std ;

string P ;
vector < vector <int> > precompute ;

inline int acc(int arr , int i) {
	if(i < 0)
		return 0 ;
	else
		return precompute[arr][i] ;
}

inline int p(char c , int i , int j) {
	if(j < i)
		return 0 ;
	return acc(c - 'p' , j) - acc(c - 'p' , i - 1) ;
}

unsigned long long solve(char a , char b , int L , int R) {
	if(L == R)
		return 0 ;
	int mid = (L + R) / 2 ;
	unsigned long long left = solve(a , b , L , mid) ;
	unsigned long long right = solve(a , b , mid + 1 , R) ;
	int sl , sr ;
	sl = p(a , L , mid) ;
	sr = p(b , mid + 1 , R) ;
	return (unsigned long long)sl * (unsigned long long)sr + left + right ;
}

int main() {
	precompute.resize(4) ;
	string p1 ;
	P = "" ;
	getline(cin , p1) ;
	for(int i = 0 ; i < p1.length() ; i++) {
		if(p1[i] == 'c')
			P = P + 'p' ;
		else if(p1[i] == 'h')
			P = P + 'q' ;
		else if(p1[i] == 'e')
			P = P + 'r' ;
		else
			P = P + 's' ;
	}
	int l = P.length() ;
	for(int i = 0 ; i < 4 ; i++) {
		precompute[i].resize(l) ;
		precompute[i][0] = 0 ;
	}
	precompute[P[0] - 'p'][0] = 1 ;

	for(int i = 1 ; i < l ; i++) {
		for(int j = 0 ; j < 4 ; j++)
			precompute[j][i] = precompute[j][i - 1] ;
		precompute[P[i] - 'p'][i] = precompute[P[i] - 'p'][i - 1] + 1 ;
	}
	int Q , L , R ;
	char a , b ;
	scanf("%d" , &Q) ;
	while(Q--) { 
		scanf(" %c %c %d %d" , &a , &b , &L , &R) ;
		char c1 , c2 ;
		if(a == 'c')
			c1 = 'p' ;
		else if(a == 'h')
			c1 = 'q' ;
		else if(a == 'e')
			c1 = 'r' ;
		else
			c1 = 's' ;
		if(b == 'c')
			c2 = 'p' ;
		else if(b == 'h')
			c2 = 'q' ;
		else if(b == 'e')
			c2 = 'r' ;
		else
			c2 = 's' ;
		printf("%lld\n" , solve(c1 , c2 , L - 1 , R - 1)) ;
	}
}