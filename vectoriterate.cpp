#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers={1,2,3,4,5};
    auto a=[=](){
        for(int i=0;i<5;i++){
        cout<<numbers[i]<<endl;

    }
    // for(int i:numbers){
    //     cout<<i<<endl;
    // }
        
    };
    a();
}