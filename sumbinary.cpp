#include<bits/stdc++.h>
using namespace std;

int addNumber(int a, int b){
    int carry = a & b;
    int sum = a ^ b;
    int temp;
    
    while(carry!=0){
        carry = carry<<1;
        temp = sum ^ carry;
        carry = sum & carry;
        sum = temp;
    }
    
    return sum;
}


int main(){
    cout << addNumber(12,13);
}
