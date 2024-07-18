#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int attendance;
};

// Public class
class Bank_client {
    public:
    string name;
    string password;
    int cvv;
    float credit_card;
};

// Private class with public methods for encapsulation
class Bank_client1 {
    private:
    string password;
    int cvv;
    float credit_card;

    public:
    string name;

    // Public method to set the password
    void set_password(string a) {
        password = a;
    }

    // Public method to get the password
    void get_password() {
        cout << "Our account password is: " << password << endl;
    }

    // Public method to set CVV and credit card number
    void set_all(int cv, int num) {
        cvv = cv;
        credit_card = num;
    }
};

int main() {
    Bank_client a;
    Bank_client1 b;
    
    // Working with the public class
    a.name = "Mohit";
    a.password = "Hello123";
    a.cvv = 123231;
    a.credit_card = 123456789;

    // Cannot access private members directly
    // b.password = "Hello123";
    // b.cvv = 123231;
    // b.credit_card = 123456789;

    // Working with the private class using public methods
    b.name = "Mohit";
    b.set_password("mohit12323189");
    b.get_password();
    b.set_all(12323121, 12334556);

    return 0;
}
