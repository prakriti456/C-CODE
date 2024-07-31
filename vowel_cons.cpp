#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){
        ifstream my_file("example.txt");
        int flag=0,cons=0;
    if(!my_file){
        cout<<"error unable to open file"<<endl;
        return 1;
    }
    char ch;
    while(my_file.get(ch)){
        if(isalpha(ch)){
            count++;
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            cout<<"vowel"<<endl;
        }
        else{
            cout<<"consonant"<<endl;
            cons++;
        }
        }
    }

  
}