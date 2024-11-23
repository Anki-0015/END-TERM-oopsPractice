#include <iostream>
using namespace std;

class Box {
private:
    int length, breadth, height;

public:
    Box() : length(0), breadth(0), height(0) {}

    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    Box(const Box& b1) {
        length = b1.length;
        breadth = b1.breadth;
        height = b1.height;
    }

    int getLength() {
        return length;
    }

    int getBreadth() {
        return breadth;
    }

    int getHeight() {
        return height;
    }

    long long CalculateVolume() {
        return static_cast<long long>(length) * breadth * height;
    }
};

int main() {
    Box box1;
    cout << "Volume of box1: " << box1.CalculateVolume() << endl;

    Box box2(3, 4, 5);
    cout << "Volume of box2: " << box2.CalculateVolume() << endl;

    Box box3(box2);
    cout << "Volume of box3: " << box3.CalculateVolume() << endl;

    return 0;
}
