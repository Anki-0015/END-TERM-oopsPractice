#include <iostream>
#include <cmath>  // for fmod
using namespace std;

class Distance {
private:
    double feet, inch;

public:
    // Default Constructor
    Distance(double f = 0, double i = 0) : feet(f), inch(i) {
        normalize();
    }

    // Read distance from user
    void readDistance() {
        cin >> feet >> inch;
        normalize();
    }

    // Display the distance
    void display() const {
        cout << static_cast<int>(feet) << "'"
             << static_cast<int>(inch) << "\"";
    }

    // Overload + operator to add two distances
    Distance operator+(const Distance& other) const {
        double totalFeet = feet + other.feet;
        double totalInches = inch + other.inch;
        return Distance(totalFeet + totalInches / 12, fmod(totalInches, 12));
    }

    // Overload - operator to subtract two distances
    Distance operator-(const Distance& other) const {
        double totalFeet = feet - other.feet;
        double totalInches = inch - other.inch;
        if (totalInches < 0) {
            totalFeet -= 1;
            totalInches += 12;
        }
        return Distance(totalFeet, totalInches);
    }

private:
    // Normalize the feet and inches (ensure inches are < 12)
    void normalize() {
        if (inch >= 12) {
            feet += inch / 12;
            inch = fmod(inch, 12);
        } else if (inch < 0) {
            feet -= (abs(inch) / 12) + 1;
            inch = 12 + fmod(inch, 12);
        }
    }
};

int main() {
    Distance d1(5, 8), d2(3, 10);

    cout << "Distance 1: ";
    d1.display();
    cout << "\nDistance 2: ";
    d2.display();

    // Add distances
    Distance d3 = d1 + d2;
    cout << "\nSum: ";
    d3.display();

    // Subtract distances
    Distance d4 = d1 - d2;
    cout << "\nDifference: ";
    d4.display();

    return 0;
}
