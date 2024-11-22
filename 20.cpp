#include<bits/stdc++.h>
using namespace std;

class Human {
public:
    int height;
    int weight;
    int age;

    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;
    }
};

class Male : public Human {
public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }

    int getHeight(){
        return this->height;
    }
};

int main() {


    Male m1;
    cout<<m1.height<<endl;





    // Male object1;

    // cout << "Age: " << object1.getAge() << endl;
    // cout << "Weight: " << object1.weight << endl;
    // cout << "Height: " << object1.height << endl;
    // cout << "Color: " << object1.color << endl;

    // object1.setWeight(84);
    // object1.sleep();

    return 0;
}
