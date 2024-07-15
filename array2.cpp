#include<iostream>
#include<array>
using namespace std;
int main(){
    array <int,4> a={3,4,2,7};
    int size=a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    // int start=a.front();
    // cout<<start<<endl;
    // a.fill(10);//set all elemnts to 10
    //     for(int i=0;i<size;i++){
    //     cout<<a[i]<<endl;
    // }
    // bool isempty=a.empty();
    // cout<<isempty;
    cout<<"element at index="<<a.at(3)<<endl;
    bool truefalse=a.empty();
    cout<<"true of false= "<<truefalse;
    bool empty=a.empty();
    cout<<"is array is empty or not= "<<empty;
    cout<<"first element ="<<a.front()<<endl;
    cout<<"last element= "<<a.back()<<endl;


    return 0;
}