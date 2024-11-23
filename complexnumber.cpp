#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor with parameters
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Display function to print the complex number
    void display() const {
        cout << real << "+" << imag << "i" << endl;
    }

    // Overloaded + operator (friend function)
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Overloaded - operator (friend function)
    friend Complex operator-(const Complex& c1, const Complex& c2);
};

// + operator: Adds two complex numbers
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

// - operator: Subtracts two complex numbers
Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2);

    // Displaying complex numbers
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();

    // Using overloaded operators
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    // Displaying the results
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}
