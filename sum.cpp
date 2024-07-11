#include <iostream>


using namespace std;
void sum(int a,int b){//func argument
    cout<<"sum= "<<a+b;
}
void mul(int a,int b){
    cout<<"product= "<<a*b;
}
void div(float a,float b){
    cout<<"questioent= "<<a/b;
}
void rem(int a,int b){
    cout<<"rem= "<<a%b;
}
void sum(int a,int b,int c){
    cout<<"sum = "<<a+b+c;
}
int main(){
    sum(4,5);
    // mul(3,4);
    // div(4,2);
    // rem(4,2);
    sum(3,4,5);

  return 0;

}
//functionn features
// 1.reusability
// 2.readability