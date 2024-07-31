#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(11);
    s.insert(11);
     s.insert(1);
    //   s.insert();
    //    s.insert(11);
    //     s.insert(8);
        for(int i:s){
            cout<<i<<endl;
        }
        set<int>::iterator it=s.begin();
        it++;
        s.erase(it);
        for(auto i:s){
            cout<<i<<endl;
        }
        cout<<endl;
        cout<<"is present "<<s.count(4)<<endl;
        set<int>::iterator itr=s.find(10);
        for(auto it=itr;it!=s.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
     }
