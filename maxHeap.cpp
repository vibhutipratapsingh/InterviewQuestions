#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &vect){
	for(auto &i: vect){
		cout << i << " ";
	}
	cout << endl;
}


void maxheapify(vector<int> &vect, int index){
		if(index > vect.size()/2-1){
			return;
		}
		int max_index = INT_MIN;
		if (vect.size()>=(index*2+2)){
			if(vect[index*2+1]<vect[index*2+2]){
				max_index = index*2+2;
			}
			else{
				max_index = index*2+1;
			}
		}
		else{
			max_index = index*2+1;
		}
		if(vect[index] < vect[max_index]){
			swap(vect[index],vect[max_index]);
			maxheapify(vect, max_index);
		}
}

void deleteHeap(vector<int> &vect){
	swap(vect[0],vect[vect.size()-1]);
	vect.pop_back();
	maxheapify(vect,0);
}

void createMaxHeap(vector<int> &vect){
	for(int i = vect.size()/2-1; i>=0;i--){
		maxheapify(vect,i);
	}
	
}


int main(){
	vector<int> vect{5,3,1,9,6,11,8};
	createMaxHeap(vect);
	print(vect);
	deleteHeap(vect);
	print(vect);
}
