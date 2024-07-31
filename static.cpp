#include<iostream>
using namespace std;
static int globalvar=0;
void example(){
    // static int count=0;
    // count++;
    // cout<<"count : "<<count<<endl;
     globalvar++;
    cout<<globalvar;
    
}
int main(){
    example();
   
}