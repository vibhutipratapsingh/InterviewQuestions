#include <bits/stdc++.h> 
using namespace std; 
void printbinaryuptohelper(int n,string output="" ){
	if(n==0){
		cout << output << endl;
	}
	else{
		printbinaryuptohelper(n-1,output+"0");
		printbinaryuptohelper(n-1,output+"1"); 
	}
}

void printbinaryupto(int n){
	printbinaryuptohelper(n);
}

  
int main(){
	int n =3;
	printbinaryupto(n);
}

