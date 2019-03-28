#include<bits/stdc++.h>
using namespace std;


struct Node{
	int val;
	struct Node* next;
};

struct Node* newNode(int n){
	struct Node* temp = new Node;
	temp->val = n;
	temp->next = NULL;
	return temp;
}

void print(struct Node* ll){
	struct Node* temp = ll;
	while(temp!=NULL){
		cout << temp->val << "->";
		temp= temp->next;
//		cout<< temp->val << endl;
	}
	cout << "NULL" << endl;
}

void rearrange(struct Node* ll){
	struct Node* slow=ll;
	struct Node* fast=ll;
	struct Node* temp = fast;
	
	if(fast->next!= NULL && fast->next->next !=NULL){
		fast->next = fast->next->next;	
		slow = slow->next;
	}
	cout << slow->val;	
//	if(fast->next!= NULL){
//		fast = fast->next;
//		fast->next = NULL;
//		slow = slow->next;
//	}
	//cout << temp;
}

int main(){
	struct Node* ll = newNode(1);
	ll->next = newNode(2);
	ll->next->next = newNode(3);
	ll->next->next->next = newNode(4);
	ll->next->next->next->next = newNode(5);
	ll->next->next->next->next->next = newNode(6);
	ll->next->next->next->next->next->next = newNode(7);
	rearrange(ll);
//	print(ll);
}

