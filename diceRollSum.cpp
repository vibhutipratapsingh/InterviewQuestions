#include<bits/stdc++.h>
using namespace std;
void helper(int n,int sum, vector<int>result){
	if(sum == 0 && n ==0){
		for(int i: result)
			cout << i << " ";
		cout << endl;
	}
	else if(n < 0){
		return;
	}
	else{
		for(int i=1;i<=6;i++){
			result.push_back(i);
			helper(n-1, sum-i,result);
			result.pop_back();
		}
	}
}

void diceROllSum(int n,int sum){
	vector <int> result;
	helper(n,sum, result);
}

int main(){
  diceROllSum(3,7);	
}
