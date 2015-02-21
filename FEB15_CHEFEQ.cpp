#include <bits/stdc++.h>
using namespace std ;

int main() {
	int T , N ;
	scanf("%d" , &T) ;
	while(T--) {
		scanf("%d" , &N) ;
		vector <int> data(N) ;
		for(int i = 0 ; i < N ; i++)
			scanf("%d" , &data[i]) ;
		int count = 1 ;
		int modecount = 1 ;
		sort(data.begin() , data.end()) ;
		for(int i = 1 ; i < N ; i++) {
			if(data[i] == data[i - 1])
				count++ ;
			else {
				if(count > modecount)
					modecount = count ;
				count = 1 ;
			}
		}
		if(count > modecount)
			modecount = count ;
		printf("%d\n" , N - modecount) ;
	}
}