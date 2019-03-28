#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long multiply(int a, int b){
	
	if(a==1){
		return b;
	}
	long result = (long)multiply(a>>1,b);
	if((a & 1)==0){
		result = result <<1;
	}
	else{
		result = (result <<1) + b;
		 
	}
	return result;
}

int main(){
	cout << multiply(5,3);
}
