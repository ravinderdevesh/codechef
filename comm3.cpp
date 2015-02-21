#include <iostream>
#include <cmath>

double distance(int x1 , int y1 , int x2 , int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) ;
}

using namespace std ;
int main () {
	int T ;
	int R ;
	int x1 , y1 , x2 , y2 , x3 , y3 ;
	cin >> T ;
	while(T--) {
		cin >> R ;
		cin >> x1 >> y1 ;
		cin >> x2 >> y2 ;
		cin >> x3 >> y3 ;
		double d12 , d23 , d31 ;
		d12 = distance(x1 , y1 , x2 , y2) ;
		d23 = distance(x2 , y2 , x3 , y3) ;
		d31 = distance(x3 , y3 , x1 , y1) ;
		if((d12 <= R && d23 <= R) || (d23 <= R && d31 <= R) || (d31 <= R && d12 <= R))
			cout << "yes\n" ;
		else
			cout << "no\n" ;
	}
}
