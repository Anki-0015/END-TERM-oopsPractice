#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    double radius, height, side, volume;

    switch (choice) {
        case 1: // Sphere
            cin >> radius;
            volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
            cout << "Volume of sphere is " << fixed << setprecision(3) << volume << endl;
            break;

        case 2: // Cylinder
            cin >> radius >> height;
            volume = M_PI * pow(radius, 2) * height;
            cout << "Volume of cylinder is " << fixed << setprecision(3) << volume << endl;
            break;

        case 3: // Cone
            cin >> radius >> height;
            volume = (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
            cout << "Volume of cone is " << fixed << setprecision(3) << volume << endl;
            break;

        case 4: // Cube
            cin >> side;
            volume = pow(side, 3);
            cout << "Volume of cube is " << fixed << setprecision(3) << volume << endl;
            break;

        default: // Wrong choice
            cout << "Wrong choice" << endl;
    }

    return 0;
}
