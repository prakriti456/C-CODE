#include<iostream>
#include<array>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        int a;
        cin>>a;
    v1.push_back(a);
    }
    int cap= v1.capacity();
    cout<<cap;
    int f=v1.front();
    cout<<f;
    int e=v1.back();
    cout<<e;
    v1.clear();
    v1.resize(15);
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }
    cout<<endl;
    v.pop_back();
      for(int i:v){
        cout<<i<<" ";

    }
        cout<<endl;
    v.pop_back();
    cout<<"after pop= "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"before clear size= "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size= "<<v.size()<<endl;

    

}