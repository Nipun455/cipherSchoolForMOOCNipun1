#include <iostream>
using namespace std;

// Function to find the minimum and maximum values in an array
void minAndmax(int a[], int *b, int *c) {
    for(int i = 0; i < 5; i++) {
        if(a[i] < *b) {
            *b = a[i];
        } 
        if(a[i] > *c) {
            *c = a[i];
        }
    }
}

int main() {
    // Declare an array of 5 integers
    int arr[5];
    
    // Initialize min and max with values to ensure they get updated
    int min = 1000, max = -1000;

    // Initialize the array with values 100, 101, 102, 103, 104
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 100;
    }

    // Call the function to find the minimum and maximum values in the array
    minAndmax(arr, &min, &max);

    // Output the minimum and maximum values
    cout << "Minimum value: " << min << " Maximum value: " << max << endl;

    return 0;
}
