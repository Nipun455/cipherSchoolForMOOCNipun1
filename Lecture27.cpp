/*
    String is a character array.
    String has a null character at the end '\0'.
    We learned to use getline and length functions.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Example of taking input using cin and accessing individual characters
    /*
    string name;
    cin >> name;
    for(int i = 0; i < 6; i++) {
        cout << name[i];
    }
    cout << endl;
    */

    // Declare three string variables
    string a, b, c;

    // Use getline to take input for strings a and b
    cout << "Enter first string: ";
    getline(cin, a);
    cout << "Enter second string: ";
    getline(cin, b);

    // Output the strings a and b
    cout << "The strings are: " << a << " " << b << endl;

    // Concatenate strings a and b and assign the result to string c
    c = a + b;
    cout << "Concatenation of a and b is: " << c << endl;

    // Output the length of the concatenated string c
    cout << "Length of concatenated string c is: " << c.length() << endl;

    return 0;
}
