#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {
    // Method 1: Basic Initialization
    int array1[5] = {1, 2, 3, 4, 5};

    // Method 2: Partial Initialization (remaining elements are zero)
    int arr2[5] = {4, 5}; // Initializes to {4, 5, 0, 0, 0}

    // Method 3: Default Initialization (all elements are zero)
    int arr3[5] = {}; // Initializes to {0, 0, 0, 0, 0}

    // Method 4: Single Value Initialization (all elements are zero)
    int arr4[5] = {0}; // Initializes to {0, 0, 0, 0, 0}

    // Method 5: Using a loop for initialization
    int arr5[5];
    for (int i = 0; i < 5; i++) {
        arr5[i] = i + 11; // Initializes to {1, 2, 3, 4, 5}
    }

    // Method 6: Using std::array (C++11 and later)
    array<int, 5> arr6 = {8, 9, 7, 5, 6};

    // User Input Initialization using std::vector for dynamic size
    int n;
    cout << "Enter the number of elements you want to add in the array: ";
    cin >> n;
    vector<int> userArray(n);

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> userArray[i];
    }

    // Output the arrays to verify initialization
    cout << "array1: ";
    for (int i : array1) cout << i << " ";
    cout << "\narr2: ";
    for (int i : arr2) cout << i << " ";
    cout << "\narr3: ";
    for (int i : arr3) cout << i << " ";
    cout << "\narr4: ";
    for (int i : arr4) cout << i << " ";
    cout << "\narr5: ";
    for (int i : arr5) cout << i << " ";
    cout << "\narr6: ";
    for (int i : arr6) cout << i << " ";
    cout << "\nuserArray: ";
    for (int i : userArray) cout << i << " ";

    return 0;
}