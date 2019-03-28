#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int a[100][100]={0};
int v[100][100]={0};

int subsetSum(list<int> s,int n, int index,int sum ){
	cout << "index = "<< index<< "sum = "<< sum<< endl;
	if(index == n+1){
		return 0;
	}
	if(sum == 0){
		return 1;
	}
	if(sum<0){
		return 0;
	}
	if(v[index][sum]!= 0){
		return a[index][sum];
	}
	v[index][sum]= 1;
	int &result = a[index][sum];
    auto it = s.begin();
    advance(it,index);
	int result = subsetSum(s, n, index+1, sum - *it) + subsetSum(s, n, index+1, sum);
//	cout << result;
//	cout << a[index][sum];
	return result;
}

	cout << "index = "<< index<< "sum = "<< sum<< endl;
	if(index == n+1){
		return 0;
	}
	if(sum == 0){
		return 1;
	}
	if(sum<0){
		return 0;
	}
	if(v[index][sum]!= 0){
		return a[index][sum];
	}
	v[index][sum]= 1;
	int &result = a[index][sum];
    auto it = s.begin();
    advance(it,index);
	int result = subsetSum(s, n, index+1, sum - *it) + subsetSum(s, n, index+1, sum);
//	cout << result;
//	cout << a[index][sum];
	return result;
}

int main(){
	list<int > s;
	s.push_back(1);
	s.push_back(2);
//	s.push_back(3);
//	s.push_back(4);
	s.push_back(5);
	s.push_back(6);
    
    
//    for(int i=0;i<=3;i++){
//    	for(int j=0;j<=13;j++){
//    		cout << v[i][j];
//		}
//		cout << "\n";
//	}
	int result = subsetSum(s,4,0,12);	
	//cout << result;
	for(int i=0;i<=3;i++){
    	for(int j=0;j<=13;j++){
    		cout << v[i][j];
		}
		cout << "\n";
	}
	
	if(result == 0 ){
		cout << "No subset"<< endl;
	}
	else{
		cout << "Subset"<< endl;
	}
	cin >> result;
}
