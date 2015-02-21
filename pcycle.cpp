#include <iostream>
#include <stdio.h>
#include <vector>
#include <sstream>
using namespace std ;

int main () {
	//2  4  5  1  7  6  3  8
	//T  F  F  F  F  F  F  F
	int N ;
	cin >> N ;
	N++ ;
	int a[N] ;
	bool visited[N] ;
	for(int i = 1 ; i < N ; i++) {
		cin >> a[i] ;
		visited[i] = false ;
	}
	vector <string> cycles ;
	stringstream ss ;
	string s ;
	for(int i = 1 ; i < N ; i++) {
		if(visited[i] == true)
			continue ;
		s = "" ;
		int start = i ;
		
		do {
			ss << start ;
			s = s + ss.str() + " " ;
			ss.str("") ;
			visited[start] = true ;
			start = a[start] ;
		}
		while(visited[start] == false) ;
		ss << start ;
		s = s + ss.str() ;
		ss.str("") ;
		cycles.push_back(s) ;
	}
	cout << cycles.size() << endl ;
	for(int i = 0 ; i < cycles.size() ; i++)
		cout << cycles[i] << endl ;
}
