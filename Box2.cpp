#include <iostream>
using namespace std;

class Box2 {
private:
    int length, breadth, height;

public:
    // Default constructor
    Box2() : length(0), breadth(0), height(0) {}

    // Parameterized constructor
    Box2(int l, int b, int h) : length(l), breadth(b), height(h) {}

    // Copy constructor
    Box2(const Box2 &b) : length(b.length), breadth(b.breadth), height(b.height) {}

    // Function to calculate the volume
    long long CalculateVolume() const {
        return static_cast<long long>(length) * breadth * height;
    }

    // Overloaded < operator to compare boxes
    bool operator<(const Box2 &b) const {
        return (length < b.length && breadth < b.breadth && height < b.height);
    }

    // Function to display box dimensions
    void display() const {
        cout << length << " " << breadth << " " << height << endl;
    }
};

int main() {
    Box2 box1(3, 4, 5), box2(6, 7, 8);

    cout << "Box1 dimensions: ";
    box1.display();

    cout << "Box2 dimensions: ";
    box2.display();

    cout << "Volume of Box1: " << box1.CalculateVolume() << endl;
    cout << "Volume of Box2: " << box2.CalculateVolume() << endl;

    // Comparing Box1 and Box2
    if (box1 < box2) {
        cout << "Box1 is smaller than Box2" << endl;
    } else {
        cout << "Box1 is not smaller than Box2" << endl;
    }

    return 0;
}
