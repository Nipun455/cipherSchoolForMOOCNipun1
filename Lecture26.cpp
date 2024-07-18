#include <iostream>
using namespace std;

int main() {
    // Example of taking input character by character into a character array
    // char name[1000];
    /*
    for(int i = 0; i < 5; i++) {
        cin >> name[i];
    }
    for(char c : name) {
        cout << c;
    }
    */

    // Example of taking input of random length and stopping at a specific character
    /*
    int i = 0;
    while (true) {
        cin >> name[i];
        if (name[i] == '#') {
            break;
        }
        i++;
    }
    i = 0;
    while (name[i] != '#') {
        cout << name[i];
        i++;
    }
    */

    // Using string to take input of any length and display it
    string name;
    cin >> name;
    cout << name << endl;

    return 0;
}
