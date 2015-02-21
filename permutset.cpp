#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std ;

int main () {
	int n ;
	scanf("%d" , &n) ;
	
	vector < vector<int> > res ;
	vector < vector<int> > p(1) ;
	p[0].push_back(1) ;
	
	//assuming I know all permutations of size n - 1 , I will generate the permutations of size n
	for(int i = 2 ; i <= n ; i++) {
		for(int j = 0 ; j < p.size() ; j++) {
			for(int k = 0 ; k <= p[j].size() ; k++) {
				vector <int> tmp(p[j]) ;
				//do something (generate tmp from p[j])
				vector <int> :: iterator it = tmp.begin() + k ;
				tmp.insert(it , 1 , i) ;
				//push back tmp in res
				res.push_back(tmp) ;
			}
		}
		p = res ;
		res.erase(res.begin() , res.end()) ;
	}
	
	for(int i = 0 ; i < p.size() ; i++) {
		for(int j = 0 ; j < p[i].size() ; j++)
			cout << p[i][j] << " " ;
		cout << endl ;
	}
}
