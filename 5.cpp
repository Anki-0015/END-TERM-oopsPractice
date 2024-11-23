#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    int c = a+b;    
    return c;
}

// this will not swap a and b
// void swap(int a , int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

void swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int x = 4, y = 5;
 //   cout<<"the sum of 4 and 5 is  "<<sum(4, 5)<<endl;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
//  this will not swap a and b
    swapPointer(&x, &y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}