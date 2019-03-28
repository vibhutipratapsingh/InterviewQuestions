#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void powerset(vector<char> s){
	int n = pow(2,s.size());
	auto c = s.begin();
	c = s.begin();
	
	for(int i=0;i<n;i++){
		if(i==0){
			cout << "NULL";
		}
		for(int j=0;j< s.size();j++){
			if(i & 1<<j){
				
				advance(c ,j);
				cout << *c;  
			}
			 c= s.begin();
		}
		
		
		cout<< endl;
//		cout<< i<<endl;
	}
}

int main(){
	vector<char> s {'a','b','c','d'};
	powerset(s);
}
