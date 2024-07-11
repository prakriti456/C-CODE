#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter array";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int value=7,flag=0,p1,p2,p3,count=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                if(arr[i]+arr[j]+arr[k]==value){
                    flag=1;
                    p1=arr[i];
                    p2=arr[j];
                    p3=arr[k];
                    cout<<"sum 7 pairs ="<<p1<<" "<<p2<<" "<<p3<<endl;
                    count++;

                    
                    

                }
            }
        

        }
    }
    cout<<"no.of pairs are"<<count;
}