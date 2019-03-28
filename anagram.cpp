#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int compare_map(map<char, int> m1, map<char, int> m2){
	if(m1.size()!= m2.size()){
		return 1;
	}
	auto it1 = m1.begin(); 
	auto it2 = m2.begin();
	for(it1; it1!= m1.end(); it1++, it2++){
		//cout << it1->first << " " << it2->first<< endl;
		//cout << it1->second << " " << it2->second<< endl;
		if((it1->first != it2->first) ||(it1->second != it2->second)){
			return 1;
		}
	}
	return 0;
}

bool anagram(string s1, string s2){
	map<char, int> m1, m2;
	if(s1.length() != s2.length()){
		return false;
	}
	for(char c:s1){
		m1[c] +=1;
	}
	for(char c : s2){
		m2[c] +=1;
	}
	if(compare_map(m1,m2)==0){
		return true;
	}
	else{
		return false;
	
	}


}

int main(){
	string s1 = string("abcdc");
	string s2 = string("abdcc");
	int n;
	cout << s1 << " and " << s2<< " are ";
	anagram(s1,s2) ? cout << "anagram"<<endl : cout << "not anagram "<<endl;    
//	cout << s1 << " and " << s2<< " "<< ;
	cin >> n;
	

}

