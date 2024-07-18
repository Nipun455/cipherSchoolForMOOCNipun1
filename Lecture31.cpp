/*
-- OBJECT ORIENTED PROGRAMMING --
--> ENCAPSULATION: Collecting similar chunks of data in the same place (class) is called encapsulation.
--> ABSTRACTION: Hiding complex implementation details and showing only the necessary features.
--> POLYMORPHISM: Ability of different classes to respond to the same function call in different ways.
--> INHERITANCE: Passing down properties from a parent class (also called base class) to children classes 
                (also known as derived classes). For example:
                - VEHICLE (Base class) --> CAR, TRUCK, BUS (Derived Classes)
*/

#include <iostream>
using namespace std;

// Definition of the base class Vehicle
class Vehicle {
public:
    int wheels;
    int doors;
    int windows;
    int passengers;

    // Constructor to initialize the member variables
    Vehicle() {
        wheels = 4;
        doors = 4;
        windows = 6;
        passengers = 5;
    }
};

// Definition of the derived class Car inheriting from base class Vehicle
class Car : public Vehicle {
public:
    // Method to display the features of the car
    void features() {
        cout << "No. of wheels: " << wheels << ", No. of doors: " << doors << endl;
        cout << "No. of windows: " << windows << ", No. of passengers: " << passengers << endl;
    }
};

int main() {
    Car c;  // Creating an object of the derived class Car
    c.features();  // Calling the features method of the Car class

    return 0;
}
