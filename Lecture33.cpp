/*
Polymorphism: We perform method overloading and overriding to achieve polymorphism.
    - Method overloading: Defining multiple functions with the same name but different parameters.
    - Operator overloading: Defining how operators work with user-defined types.

Abstraction: Hiding the details that are not required for the user to know.
*/

#include <iostream>
using namespace std;

class Coordinate {
public:
    float a, b;

    // Operator overloading for the '+' operator
    Coordinate operator+(Coordinate const& obj) {
        Coordinate z;
        z.a = this->a + obj.a;
        z.b = this->b + obj.b;
        return z;
    }

    // Method overloading for calculating square distance from a single coordinate
    void sqr_dist_from_coordinate(float a) {
        float dist;
        dist = (this->a - a) * (this->a - a) - (this->b - a) * (this->b - a);
        cout << dist << endl;
    }

    // Method overloading for calculating square distance from a pair of coordinates
    void sqr_dist_from_coordinate(float a, float b) {
        float dist;
        dist = (this->a - a) * (this->a - a) - (this->b - b) * (this->b - b);
        cout << dist << endl;
    }
};

int main() {
    Coordinate c;
    c.a = 100;
    c.b = 20;

    Coordinate d;
    d.a = 1;
    d.b = 2;

    Coordinate z;
    z = c + d; // Using operator overloading to add two Coordinate objects

    cout << z.a << " " << z.b << endl; // Output the result of the addition

    c.sqr_dist_from_coordinate(0, 0); // Using method overloading

    return 0;
}
