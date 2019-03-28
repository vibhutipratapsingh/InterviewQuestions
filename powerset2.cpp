// CPP program to generate power set 
#include <bits/stdc++.h> 
using namespace std; 

void powerSet(string s, string cur =""){
	if(s.length()==0){
		if(cur.length())
	 		cout << cur << endl;
	 	else
	 		cout << "NULL" << endl;
	}
	else{
//		cout<<s.length();
		char temp = s[0];
	//	cout << temp<< endl;
		s = s.erase(0,1);
		powerSet(s,cur);
		cur+=temp;
	//	cout << cur << endl;
		powerSet(s,cur);
		cur.pop_back();
		s=temp+s;
	//	cout <<s<<endl;
		//cout <<s; 	
	}
	
}


// Driver code 
int main() 
{ 
	string str = "abc"; 
	powerSet(str); 
	return 0; 
} 

