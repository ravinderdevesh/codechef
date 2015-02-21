#include <bits/stdc++.h>
using namespace std ;

vector <int> num ;

class segtree {
	public:
		int value, lo, hi ;
		segtree *left , *right ;
} ;

int rangesum(int i , int j , segtree* segmenttree) {
	int a = segmenttree -> lo , b = segmenttree -> hi ;
	if(j < a || i > b)
		return 0 ;
	if(i <= a && b <= j)
		return segmenttree -> value ;
	else if(i < a && j <= b)
		return rangesum(a , j , segmenttree) ;
	else if(a <= i && b < j)
		return rangesum(i , b , segmenttree) ;
	else if(a <= i && j <= b)
		return rangesum(i , j , segmenttree -> left) + rangesum(i , j , segmenttree -> right) ;
}

int createtree(segtree* &segmenttree , int lo , int hi) {
	segmenttree = new segtree ;
	segmenttree -> lo = lo ;
	segmenttree -> hi = hi ;
	if(lo == hi)
		return segmenttree -> value = num[lo] ;
	int mid = (lo + hi) / 2 ;
	return (segmenttree -> value) = createtree(segmenttree -> left , lo , mid) + createtree(segmenttree -> right , mid + 1 , hi) ;
}

int updatetree(segtree* & segmenttree , int pos , int elm) {
	int a = segmenttree -> lo , b = segmenttree -> hi , diff ;
	if(a == b) {
		diff = elm - segmenttree -> value ;
		segmenttree -> value = elm ;
	}
	else {
		int mid = (a + b) / 2 ;
		if(pos <= mid)
			diff = updatetree(segmenttree -> left , pos , elm) ;
		else
			diff = updatetree(segmenttree -> right , pos , elm) ;
		segmenttree -> value = segmenttree -> value + diff ;
	}
	return diff ;
}

int main() {
	int n ;
	scanf("%d" , &n) ;
	num.resize(n) ;
	for(int i = 0 ; i < n ; i++)
		scanf("%d" , &num[i]) ;
	segtree* segmenttree ;
	int sum = createtree(segmenttree , 0 , n - 1) ;
	cout << rangesum(0 , n - 1 , segmenttree) << endl ;
	int upd = updatetree(segmenttree , 3 , 5) ;
	cout << rangesum(0 , n - 1 , segmenttree) << endl ;
}