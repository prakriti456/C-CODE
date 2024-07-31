#include<fstream>
#include<iostream>
using namespace std;
int main(){//open file
    fstream my_file("example.txt");
    if(!my_file){
        cout<<"error unable to open file"<<endl;
        return 1;
    }
    //to write
    my_file << "mohan 30"<<endl;
    my_file <<"moye moye 40"<<endl;
    my_file <<"zenitsu"<<endl;
    string line;
    while(!my_file.eof()){
        getline(my_file,line);
        cout<<line<<endl;
    }

    my_file.close();
    return 0;
}