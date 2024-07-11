#include<iostream>
using namespace std;
int main(){
    int max=0,min=32768;
    int arr[5]={4,5,7,1,3};
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    
    }
    cout<<max;
    for(auto x:arr)
    if(x<min){
    min=x;
    }

    cout<<min;
}