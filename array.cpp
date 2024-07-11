#include<iostream>
using namespace std;
int main(){
 int a[5]={1,3,5,7,9};
 cout<<"completely initialized int array a : "<<endl;
 for(int x:a)//for each loop very easy and important for array data structure
 //read as  for x in array a
 //read each loop iterates through elements of the array. introduces in c++11

 cout<<x<<endl;
 cout<<endl;

 int b[6]={1,3,5};//keeping the array incomplete to see what is the outcome result
 cout<<"partial initialized int array b : "<<endl;

 for(int y:b)//shows that for each loop will work acc to size of array and not according
 //to number of elements initialized in the array

 cout<<y<<endl;
 cout<<endl;
 float c[6]={1.2,2.4,3.6,48.54,99.48,54.88};
 cout<<"completely initialized float array c : ";
 for(float z:c)
 cout<<z<<endl;
 cout<<endl;

//  float d[6]={12.6,2.4,3.6,48.54};
 char e[5]={'A',66,'C',68,'E'};//no need to know the type of array
 cout<<"completely initialized char array E with auto : "<<endl;
 for(int z:e)
 cout<<z<<endl;
 cout<<endl;
 return 0;
}