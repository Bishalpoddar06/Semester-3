/*
Problem 3: Multilevel Inheritance

Statement:
Create a base class Vehicle with members mileage and price. Derive Car from
Vehicle with additional members fuelType and seatingCapacity. Further derive
SportsCar from Car that adds topSpeed and horsePower. Input and display details
of a SportsCar.
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
 public:
  float mileage;
  float price;
};

class Car : public Vehicle {
 public:
  string fuelType;
  int seatingCapacity;
};

class SportsCar : public Car {
 public:
  float topSpeed;
  float horsePower;
};

int main() {
  SportsCar c;

  cout << "Enter sports car details..." << endl;
  cout << "Mileage : ";
  cin >> c.mileage;
  cout << "Price : ";
  cin >> c.price;
  cout << "Fuel Type : ";
  cin >> c.fuelType;
  cout << "Seating capacity : ";
  cin >> c.seatingCapacity;
  cout << "Top speed : ";
  cin >> c.topSpeed;
  cout << "Horse Power : ";
  cin >> c.horsePower;

  cout << "Printing details..." << endl;

  cout << "Mileage : " << c.mileage << endl;
  cout << "Price : " << c.price << endl;
  cout << "Fuel type : " << c.fuelType << endl;
  cout << "Seating capacity : " << c.seatingCapacity << endl;
  cout << "Top speed : " << c.topSpeed << endl;
  cout << "Horse power : " << c.horsePower << endl;

  return 0;
}

/* OUTPUT
Enter sports car details...
Mileage : 10
Price : 500000
Fuel Type : Petrol
Seating capacity : 8
Top speed : 90
Horse Power : 750
Printing details...
Mileage : 10
Price : 500000
Fuel type : Petrol
Seating capacity : 8
Top speed : 90
Horse power : 750
*/