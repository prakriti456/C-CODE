#include<iostream>
using namespace std;
int main(){
    // const char* message{"hello world!"};
    // cout<<"message :"<<message<<endl;//hello world!
    // //*message="b";//compiler error
    // cout<<"message:"<<*message<<endl;//h
    // //allow users to  modify the string
    // char message1[] {"hello world!"};
    // message1[0]='B';
    // cout<<"message1 : "<<message1<<endl;//bello world
    int i=10;
    int *j=&i;
    j=&(i+34);
    cout<<j;

}