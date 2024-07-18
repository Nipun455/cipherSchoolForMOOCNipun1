/*
--> INHERITANCE: Passing down properties from a parent class, also called a base class, to children classes 
                 also known as derived classes is called inheritance. For example:
                 - VEHICLE (Base class) --> CAR, TRUCK, BUS (Derived Classes)

   MODES OF INHERITANCE:
   - PUBLIC: We can access the members of the class directly.
   - PRIVATE: We can't access the members of the class directly; we need to use getter and setter functions.
   - PROTECTED: Makes data accessible only to derived classes.

   TYPES OF INHERITANCE:
   - SINGLE: When a single class inherits the base class, it is called single inheritance.
   - MULTILEVEL: When a class inherits another class, which in turn inherits another class, it is called multilevel inheritance.
*/

#include <iostream>
using namespace std;

// Definition of the base class Vehicle
class Vehicle {
protected: // Protected members are accessible within the class and by derived classes
    int wheels;
    int doors;
    int windows;
    int passengers;
    int mileage;

    // Constructor to initialize the member variables
    Vehicle() {
        wheels = 4;
        doors = 4;
        windows = 6;
        passengers = 5;
    }
};

// Definition of the derived class Car inheriting from base class Vehicle using private inheritance
class Car : private Vehicle {
public:
    // Method to display the features of the car
    void features() {
        cout << "No. of wheels: " << wheels << ", No. of doors: " << doors << endl;
    }

    // Setter method to set the mileage of the car
    void set_mileage(int mileage) {
        this->mileage = mileage;
    }

    // Method to display the mileage of the car
    void calculateMileage() {
        cout << "Mileage of our vehicle is: " << mileage << endl;
    }
};

int main() {
    Car c; // Creating an object of the derived class Car
    c.set_mileage(100); // Setting values in the derived class Car
    c.calculateMileage(); // Calling the calculateMileage method to display the mileage

    return 0;
}
