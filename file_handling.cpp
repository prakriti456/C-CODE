//<fstream>
//1) ifstream- to read from a file
//2)ofstream- create/open file
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream my_file("example.txt");
    my_file.close();//if not closed memory leakage happens
    //1.
    // if(!my_file){
    //     cout<<"Error opening the file"<<endl;
    //     return 1;
    // }
    //2.with open()
    if(!my_file.is_open()){
        cout<<"error opening file"<<endl;
        return 1;
    }

    return 0;
}