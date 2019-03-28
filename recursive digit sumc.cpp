#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_string(string);

// Complete the superDigit function below.
int superDigit(string n, int k) {
    if(n.length()<=1 ){
        return stoi(n);
    }
    string temp = n;
    for(int i=0;i<k;i++){
        n = n+temp;
    }
    int val = (int) n[n.length()-1];
    n.pop_back();
    return val + superDigit(n,1);


}

int main(){
    string n = "148";
    int k =3;
    int result = superDigit(n, k);
    cout << result + endl;
}

