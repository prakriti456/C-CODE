#include <iostream>

#include <string>

#include <vector>
using namespace std;
class Car {

private:

  std::string licensePlate;

  std::string owner;

public:

  Car(std::string lp, std::string o)

  : licensePlate(lp), owner(o) {}

  std::string getLicensePlate() const {

    return licensePlate;

  }

  void display() const {

std::cout << "License Plate: " << licensePlate << ", Owner: " << owner << std::endl;

  }

};

class ParkingLot {

private:

  std::vector<Car> parkedCars;

  int capacity;

public:

  ParkingLot(int cap)

    : capacity(cap) {}

  bool parkCar(const Car& car) {

    if (parkedCars.size() < capacity) {

      parkedCars.push_back(car);

      return true;

    } else {

      std::cout << "Parking lot is full!" << std::endl;

      return false;

    }

  }

  void displayParkedCars() const {

    std::cout << "Parked Cars:\n";

    for (const auto& car : parkedCars) {

      car.display();

    }

  }

};
class employee_dept{
    public:
      string empname;
        int salary,id;
           string empname1;
        int salary1,id1;
        public:
    void ticket_dept(){
       
        cout<<"enter employee name"<<endl;
        cin>>empname;
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"enter salary"<<endl;
        cin>>salary;

        

    }
    void displayt(){
        cout<<"employee name is:"<<empname<<endl;
        cout<<"the id is : "<<id<<endl;
        cout<<"the salary is : "<<salary<<endl;
    }
        void tech_dept(){
     
        cout<<"enter employee name"<<endl;
        cin>>empname1;
        cout<<"enter id"<<endl;
        cin>>id1;
        cout<<"enter salary"<<endl;
        cin>>salary1;
        }
           void displayte(){
        cout<<"employee name is:"<<empname1<<endl;
        cout<<"the id is : "<<id1<<endl;
        cout<<"the salary is : "<<salary1<<endl;
    }

};
class price{
    public:
    int vehicle;
    public:
    void vehicle_price(){
        cout<<"enter your vehicle type"<<endl;
        cin>>vehicle;
        if(vehicle==2){
            cout<<"price: 50"<<endl;
        }
        if(vehicle==3){
            cout<<"price: 75"<<endl;
        }
        if(vehicle==4){
            cout<<"price: 100"<<endl;
        }
    }

};

int main() {

  ParkingLot myParkingLot(10);

  Car car1("BC123", "Sanjay gore");

  Car car2("YZ457", "Janvi manse");

  Car car3("MN423", "Aliya kapse");

  Car car4("QR6124", "meena sharma");

  myParkingLot.parkCar(car1);

  myParkingLot.parkCar(car2);

  myParkingLot.parkCar(car3);

  myParkingLot.parkCar(car4);

  myParkingLot.displayParkedCars();
  employee_dept e1;
  e1.ticket_dept();
  e1.displayt();
  e1.tech_dept();
  e1.displayte();
  price p;
  p.vehicle_price();

  return 0;

}

/*

Car Class: Defines a car with a license plate and owner. It includes a constructor to initialize these attributes and a method to display car information.

ParkingLot Class: Manages a collection of cars using a std::vector and has a capacity limit. It provides methods to park a car and display all parked cars.

Main Function: Creates instances of Car, attempts to park them in an instance of ParkingLot, and then displays the parked cars.

*/



















