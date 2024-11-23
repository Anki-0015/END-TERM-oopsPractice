#include<bits/stdc++.h>
using namespace std;

class A {

    public:
    void sayHello() {
        cout<<"hello" <<endl;
    }

    void sayHello(string name) {
        cout<<"hello"<<name<<endl;
    }
};

class B {

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){

        int value1 = this-> a;
        int value2 = obj.a;
        cout<<"output "<<value2 - value1 << endl;
    }
};

class Animal {

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal {

    public:
    void speak(){
        cout<<"barking"<<endl;
    }

};

int main(){

    Dog obj;
    obj.speak();




    // B obj1, obj2;

    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;  // + always calls only the + one function

}