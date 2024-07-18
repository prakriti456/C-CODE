#include<iostream>
#include<string>
using namespace std;
class teacher{
    private:
    double salary;//data hiding
    public:
    string name;
    string dept;
    string subject;
    void changedept(string newdept){
        dept=newdept;
    }
    
    //getter setter
    void setsalary(double s){
        salary=s;

    }
    int  getsalary(){
        return salary;
    }
    void getinfo(){
        cout<<"teacher name"<<name<<endl;
        cout<<"teacher subject"<<subject<<endl;
    }
    teacher(){
        cout<<"constructor is calling";
    }
    teacher(string name,string dept,string subject,double salary){
        // name=s;
        // dept=d;
        // subject=sub;
        // salary=sal;
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;

    }
    };
    int main(){
        // teacher t1;
        // t1.name="sarang";
        // t1.subject="math";
        // t1.changedept("CSE");
        // t1.getinfo();
        // cout<<t1.name<<endl;
      
           teacher t1("sumedh","cse","c++",1500000);
           t1.getinfo();
              t1.setsalary(100);

        int salary=t1.getsalary();
         cout<<salary;
           teacher t2(t1);
       
     
        t2.getinfo();
       
        
    }
