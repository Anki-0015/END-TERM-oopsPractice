#include<bits/stdc++.h> 
using namespace std;

int main() {

    int a = 3;
    int* b = &a;
    b = &a;

    cout<<b<<endl;    // address
    cout<<&a<<endl;   // address

    cout<<*b<<endl;   // value

    int** c = &b;

    cout<<&b<<endl;  
    cout<<c<<endl;   
    cout<<*c<<endl;
    cout<<**c<<endl;

    return 0;
}