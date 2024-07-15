#include<iostream>
#include<array>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    array <int,5> a={3,4,7,2,7};
    // int counts=count(a.begin(),a.end(),7);
    // cout<<"count of 7 is "<< counts<<endl;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<endl;
    
    sort(a.begin(),a.end());
      for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}



