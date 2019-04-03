
#include<bits/stdc++.h>
using namespace std;


int maxArea(vector<int> &histogram){
    if(histogram.size()==0){
        return 0;
    }
    if(histogram.size()==1){
        return histogram[0];
    }
    vector<int> s1;
    vector<int> s2;
    cout << "pushing: 0" << endl;
    s1.push_back(0);
    int i=0,j=0;
    int max = INT_MIN;
    cout <<"max: "<< max<< endl;
    while(j<histogram.size()){
        j++;
        cout << "j: "<< j<< endl;
        if(histogram[j] >= histogram[s1[s1.size()-1]]){
            s1.push_back(j);
            cout << "pushing: "<< j<< endl; 
        }
        else{
            while(s1.size()>0 && (histogram[s1[s1.size()-1]] >= histogram[j]) ){
                int index= s1[s1.size()-1];
                cout << "poping from stack: "<< s1[s1.size()-1] << endl;
                s1.pop_back();
                int area = (j-(s1[s1.size()-1]+1))*histogram[index];
                cout  << "area: " << area << endl;
                if(area > max){
                    max = area;
                    cout <<"max: "<< max<< endl;
                }
                
            }
            
            cout << "pushing: "<< j<< endl;
            s1.push_back(j);
            //i--;
        }
    }
    
    return max;
}

int main(){
    vector<int> histogram{6,2,5,4,5,1,6};
    cout << "maxArea: " << maxArea(histogram)<<endl;
}


