#include <iostream>
using namespace std;

class ArrayClass {
private:
    int* ptr;
    int size;

public:
    // Constructor: Allocate memory for the array
    ArrayClass(int s) : size(s), ptr(new int[s]()) {}

    // Destructor: Free the allocated memory
    ~ArrayClass() {
        delete[] ptr;
    }

    // Copy Constructor: Deep copy from another ArrayClass
    ArrayClass(const ArrayClass& other) : size(other.size), ptr(new int[other.size]) {
        for (int i = 0; i < size; ++i) {
            ptr[i] = other.ptr[i];
        }
    }

    // Assignment Operator: Assign one ArrayClass to another
    ArrayClass& operator=(const ArrayClass& other) {
        if (this != &other) {
            delete[] ptr;
            size = other.size;
            ptr = new int[size];
            for (int i = 0; i < size; ++i) {
                ptr[i] = other.ptr[i];
            }
        }
        return *this;
    }

    // Array indexing operator to access elements
    int& operator[](int index) {
        return ptr[index];
    }

    // Display array contents
    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayClass arr1(5); // Create an ArrayClass of size 5
    for (int i = 0; i < 5; ++i) {
        arr1[i] = i + 1; // Assign values to the array
    }

    ArrayClass arr2 = arr1; // Use the copy constructor
    ArrayClass arr3(3); // Create another array of size 3
    arr3 = arr1; // Use the assignment operator

    // Display the arrays
    cout << "arr1: ";
    arr1.display();
    cout << "arr2: ";
    arr2.display();
    cout << "arr3: ";
    arr3.display();

    return 0;
}
