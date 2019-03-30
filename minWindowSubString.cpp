#include<bits/stdc++.h>
using namespace std;

#define N 256 

bool testSimilarity(string str, string pat, int *str_hash, int* pat_hash){
    for(int i=0;i<pat.length();i++){
        if(pat_hash[pat[i]] > str_hash[pat[i]] ){
            return false;
        }
    }
    return true;
}

int findSmallestWindow(string str, string pat){
    int len_str = str.length();
    int len_pat = pat.length();
    int str_hash[N]={0};
    int pat_hash[N]={0};
    
    if(len_str < len_pat ){
        return 0;
    }
    for(int i=0;i< len_pat;i++){
        pat_hash[pat[i]] +=1;
    }
    int left = 0;
    int right =0;
    int window = 0;
    int minWindow = INT_MAX;
    int flagFound = 0;
    while(right<len_str){
        
        if(!testSimilarity(str,pat,str_hash,pat_hash)){
            str_hash[str[right]]+=1;
            right ++;
            window++;
        }
        else{
            // cout<< window <<endl;
            flagFound = 1;
            left++;
            str_hash[str[left-1]]-=1;
            window--;
            if(minWindow > window){
                minWindow = window;
            }
            // cout <<"minWindow: "<< minWindow<<endl;
        }
        
    }
    if(flagFound==0){
        return 0;
    }
    
    return minWindow;
}


int main(){
    string str="this is a test string";
    string pat = "tist";
    cout << "smallest window : " << findSmallestWindow(str, pat);
}
