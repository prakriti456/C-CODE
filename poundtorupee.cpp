#include<iostream>
using namespace std;
void rupeetopound(float rupee){
    cout<<"rupee to pound is"<<rupee/106.90;
    
}
void poundtorupee(float pound){
    cout<<"pound to rupee is "<<pound*106.90;
}
void rstous(float rs){
    cout<<"rs to us dollar is "<< rs/83.52;


} 
void ustors(float us){
    cout<<"us dollar to rs is "<< us*83.52;
}
void rstoyuan(float rs){
    cout<<"rs to yuan is "<< rs/11.48;
}
void yuantorupee(float yuan){
    cout<<"yuan to rs "<<yuan*11.48;
}

int main(){
  float rupee,pound,us,yuan;
  cout<<"enter rupee"<<endl;
  cin>>rupee;
   cout<<"enter pound"<<endl;
  cin>>pound;
   cout<<"enter us dollar"<<endl;
  cin>>us;
   cout<<"enter yuan"<<endl;
  cin>>yuan;
  rupeetopound(rupee);
  poundtorupee(pound);
  rstous(rupee);
  ustors(us);
  rstoyuan(rupee);
  yuantorupee(yuan);


    return 0;
}