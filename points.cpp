#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std ;

class point {
	public :
		int x , y ;
		point() {
			x = y = 0 ;
		}
} ;

struct compare {
	bool operator()(point const &p1 , point const &p2) {
		if(p1.x < p2.x)
			return true ;
		else if(p1.x == p2.x)
			return (p1.y >= p2.y) ;
		else
			return false ;
	}
} ;

int main () {
	int t , n ;
	scanf("%d" , &t) ;
	while(t--) {
		scanf("%d" , &n) ;
		vector <point> points (n) ;
		for(int i = 0 ; i < n ; i++) {
			scanf("%d" , &points[i].x) ;
			scanf("%d" , &points[i].y) ;
		}
		sort(points.begin() , points.end() , compare()) ;
		double distance = 0.0 ;
		for(int i = 0 ; i < n - 1 ; i++) {
			distance = distance + sqrt((points[i].x - points[i + 1].x) * (points[i].x - points[i + 1].x) + (points[i].y - points[i + 1].y) * (points[i].y - points[i + 1].y)) ;
		}
		printf("%.2f\n" , distance) ;
	}
}
