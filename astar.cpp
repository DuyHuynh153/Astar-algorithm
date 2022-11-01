#include<iostream>
#include<vector>
using namespace std; 

int main (){

    vector<vector<int> >  a;


    for (int i = 0; i < 5; i++){
        vector<int> v;
        v.push_back(i+1);
        a.push_back(v);
    }    

    cout <<"size of vector a: "<<a[1][0]<<endl;

    return 0;
}