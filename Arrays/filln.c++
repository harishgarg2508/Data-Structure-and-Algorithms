#include <iostream>
#include <algorithm> // for std::fill_n
using namespace std;

int main() {
    const int size = 10; // size of the array
    int arr[size]; // declare an array of integers

    // fill the array with 1s
    fill_n(arr, size, 1);

    // print the array to verify
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    return 0;
}
