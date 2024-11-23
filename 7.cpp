#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if (n<=2){
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

// int fact(int n){
//     if (n<=1){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }

int main(){
 
    int a;
    cout<<"enter the number: "<<endl;
    cin>>a;
    // cout<<"the factorial of "<<a<<" is "<<fact(a)<<endl;
    cout<<"the fibonacci series of "<<a<<" is "<<fib(a)<<endl;

    return 0;
}