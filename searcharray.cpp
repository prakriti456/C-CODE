#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int search,flag=0,index,counter=0;
    cin>>search;
    // for(int i=0;i<5;i++){
    //     if(search==arr[i]){
    //         flag=1;
    //         index=i;
    //     }
    // }
    for(auto x:arr){
        if(search==x){
            flag=1;
            break;
        }
        counter++;
    }
    if(flag==1){
        cout<<"found at "<< counter;
    }
    else{
        cout<<"not found";

    }
}