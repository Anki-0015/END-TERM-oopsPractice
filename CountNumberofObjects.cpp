#include <iostream>
using namespace std;

class ObjectCounter {
public:
    static int count; 

    ObjectCounter() {
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }

    ~ObjectCounter() {
        count--;
        cout << "Object destroyed. Total objects: " << count << endl;
    }
};

int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1; 
    ObjectCounter obj2; 
    {
        ObjectCounter obj3; 
    } 
    ObjectCounter obj4; 

    return 0;
}
