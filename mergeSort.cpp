#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &vect){
	for(auto &i: vect){
		cout << i << " ";
	}
	cout << endl;
}

void merge(vector<int> &vect, int left, int right, int mid){
	vector<int> temp;
	int i = left;
	int j = mid+1;
	while(i<=mid && j<= right ){
		if(vect[i]<vect[j]){
			temp.push_back(vect[i]);
			i++;
		}
		else{
			temp.push_back(vect[j]);
			j++;
		}
	}
	if(i>mid){
		while(j <= right){
			temp.push_back(vect[j++]);
		}
	}
	else if(j>right){
		while(i <= mid){
			temp.push_back(vect[i++]);
		}
	}
	for( int i=0;i< temp.size();i++){
		vect[left + i] = temp[i];
	}
	print(vect);
}


void mergeSort(vector<int> &vect, int left, int right){
	if(right<=left){
		return ;
	}
	
	if(left<right){
		int mid = (left+right)/2;
		mergeSort(vect, left,mid );
		mergeSort(vect, mid+1 , right );
//		print(vect);
		merge(vect, left, right, mid);
	}
}

int main(){
	vector<int> vect{5,3,1,9,6,11,8};
	mergeSort(vect, 0, vect.size()-1);
}
