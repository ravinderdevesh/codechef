#include <iostream>
#include <sstream>
#include <string>
#include <stack>
using namespace std ;
int main () {
	int t ;
	cin >> t ;
	for(int m = 0 ; m < t ; m++) {
	stack <string> operands ;
	stack <char> operators ;
	string s , s1 , s2 , s3 , s4 ;
	string res = "" ;
	cin >> s ;
	int l = s.length() ;
	char c ;
	for(int i = 0 ; i < l ; i++) {
		if(s[i] == ')') {
			s1 = operands.top() ;
			operands.pop() ;
			s2 = operands.top() ;
			operands.pop() ;
			s3 = operators.top() ;
			operators.pop() ;
			operands.push(s2 + s1 + s3) ;
		}
		else {
			if(s[i] >= 'a' && s[i] <= 'z') {
				stringstream ss ;
				c = s[i] ;
				ss << c ;
				ss >> s4 ;
				operands.push(s4) ;
			}
			else if(s[i] != '(')
				operators.push(s[i]) ;
		}
	}
	s = operands.top() ;
	operands.pop() ;
	cout << s << endl ;
}
}
