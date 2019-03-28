#include<bits/stdc++.h>
using namespace std;

void balancedparanhelper(int open, int close, string s){
// 	cout << "Testing"<< endl;
	if(open==0 && close ==0){
		cout << s << endl;
	}
	else{
		if(open > 0){
			s += "{";
// 			cout << s;
			balancedparanhelper(open-1, close,s);
			s.erase(s.length()-1,1);
// 			cout<< s;
		}
		if(close > open){
		    s += "}";
		    balancedparanhelper(open,close-1,s);
		    s.erase(s.length()-1,1);
		}
	}
	
}

void balancedparan(int n){
	string s = "";
// 	cout <<"lol";
	balancedparanhelper(n,n,s);
}

int main(){
	balancedparan(3);
	int t;
	cin >> t;
}
