/*
    STL (Standard Template Library)
    VECTOR - A dynamic array whose size is not fixed and will allocate space as needed upon insertion.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> vec;

    // Output the initial size of the vector (should be 0)
    cout << "Size of vector before inserting elements: " << vec.size() << endl;

    // Insert elements into the vector using push_back
    for (int i = 1; i <= 5; i++) {
        vec.push_back(i);
    }

    // Output the size of the vector after inserting elements
    cout << "Size of vector after inserting elements: " << vec.size() << endl;

    // Remove the last element from the vector using pop_back
    vec.pop_back();

    // Output the size of the vector after removing an element
    cout << "Size of vector after popping an element: " << vec.size() << endl;

    // Iterate over the vector and print its elements
    cout << "Elements in the vector: ";
    for (auto j = vec.begin(); j != vec.end(); j++) {
        cout << *j << " ";
    }
    cout << endl;

    // Output the capacity of the vector
    cout << "Capacity of vector: " << vec.capacity() << endl;

    return 0;
}
