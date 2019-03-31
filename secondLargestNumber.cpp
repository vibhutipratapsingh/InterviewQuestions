#include<bits/stdc++.h>
using namespace std;


void print(vector<int> &vect){
	for(auto &i: vect){
		cout << i << " ";
	}
	cout << endl;
}

int findSecondMax(vector<int> &v){
	if(v.size()<=1){
		return -1;
	}
	
	vector<int> temp;
	priority_queue<int, vector<int>, greater<int> >pq;	

	
	for(auto &a : v){
		cout << "pq.size() : "<< pq.size() << endl;
		if(pq.size()<=2){
//			cout <<  a << endl;
//			cout << "pq.top(): "<< pq.top()<< endl;
//			cout << "temp : ";
			print(temp);
			if(count(temp.begin(),temp.end(),a)==0){
				temp.push_back(a);
				pq.push(a);
			}	
		}
		if(pq.size()>2){
			pq.pop();
		}
		//pq.push(v[0]);	
	}
	if(pq.size()==2){
		return pq.top();
	}
	else{
		return -1;
	}

	
}

int main(){
	vector<int> v1 = {20, 30, 40, 25, 15,50 ,80}; 
	int n = findSecondMax(v1);
	if(n<0){
		cout << "No 2nd min \n";
		return -1;
	}
	cout << "second largest element : "<< n <<"\n";
	return n;
}
