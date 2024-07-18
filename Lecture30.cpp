/*
  A constructor is a special member function that is called whenever a new object is created.
  It has the same name as the class and does not have a return type.
  
  A destructor is used to destroy an object and free up resources. It has the same name as the class 
  with a tilde (~) prefix and does not have a return type.
*/

#include <iostream>
using namespace std;

// Definition of the Complex class
class Complex {
private:
    float real;
    float img;

public:
    // Parameterized constructor to initialize the values of real and img
    Complex(float real, float img) {
        this->real = real;
        this->img = img;
    }

    // Method to calculate and print the square of the distance from the origin
    void SqDistanceFromOrigin() {
        float dist = real * real + img * img;
        cout << "The square of the distance from the origin is: " << dist << endl;
    }
};

// Definition of the New_Account class
class New_Account {
public:
    int amount;
    int day;

    // Default constructor to initialize the values of amount and day to zero
    New_Account() {
        amount = 0;
        day = 0;
        cout << "Constructor called" << endl;
    }

    // Destructor to indicate when an object is destroyed
    ~New_Account() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Create an object of the Complex class using the parameterized constructor
    Complex c(10.4, 20.5);
    c.SqDistanceFromOrigin();

    // Create two objects of the New_Account class
    New_Account n1, n2;

    return 0;
}
