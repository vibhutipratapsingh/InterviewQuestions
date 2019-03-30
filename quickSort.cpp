#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &vect){
	for(auto &i: vect){
		cout << i << " ";
	}
	cout << endl;
}

int partition(vector<int> &vect, int left, int right){
	int i=left-1;
	int j=left;
	while(j!=right){
		if(vect[j]<=vect[right]){
			swap(vect[j],vect[i+1]);
			i+=1;
		}
		j+=1;
	}
	swap(vect[right],vect[i+1]);
	//print(vect);
	return i+1;
} 

void quickSort(vector<int> &vect,int left, int right ){
	if(left<right){
		int p = partition(vect, left, right);
		quickSort(vect,left,p-1);
		quickSort(vect,p+1,right);
	}
}

int main(){
	vector<int> vect{5,3,1,9,6,11,8};
	quickSort(vect,0,vect.size()-1);
	print(vect);
}

