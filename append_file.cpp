#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream my_file("example.txt",ios::app);
    if(!my_file){
        cout<<"failed to open file"<<endl;
        return 1;
    }
      my_file << "mohan 30"<<endl;
    my_file <<"moye moye 40"<<endl;
    my_file <<"zenitsu"<<endl;
    my_file.close();
    return 0;
}