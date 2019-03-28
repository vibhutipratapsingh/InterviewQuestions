// CPP program to generate power set 
#include <bits/stdc++.h> 
using namespace std; 


void permuntation(string s,string cur =""){
	 if(s.empty()){
	 	cout << cur<<endl;
	 }
//	 cout << s<< endl;
	 
	 for(int i=0;i<s.size();i++){
	 	string temp = "";
	 	
	 	temp+=s[i];
	 	//cout << temp <<endl;
		 cur+=(temp);
	 	s.erase(s.begin()+i, s.end()-s.length()+i+1);
//		cout << cur << endl<< cur << endl;
		permuntation(s,cur);
	 	cur.pop_back();
	 	s.insert(i,temp); 
	 	
	 	
	 }
}


// Driver code 
int main() 
{ 
	string str = "abc"; 
	permuntation(str); 
	return 0; 
} 

