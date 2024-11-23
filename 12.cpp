#include<bits/stdc++.h>
using namespace std;

// void print(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// void print(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// void print(int n){
//     for(int i = 1; i<n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// void print(int n){
//     for(int i = 1; i<n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


// void print(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n-i; j++){
//             cout<<"";
//         }
//         cout<<endl;
//     }
// }

// void print(int n){
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n-i+1; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


void print(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' for the border, space for the inside
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}


int main(){

    int n;
    cin >> n;
    print(n);

    return 0;
}