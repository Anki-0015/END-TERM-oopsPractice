// #include<bits/stdc++.h>
// using namespace std;

// bool search(int arr[], int size, int key){

//     for(int i = 0; i<size; i++){  
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return 0;    
// }

// int main(){

//     int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

//     cout<<"enter the element to search for "<< endl;

//     int key;
//     cin>>key;

//     bool found = search(arr, 10, key);

//     if(found){
//         cout<<"key is present "<<endl;
//     }
//     else{
//         cout<<"key is absent "<<endl;
//     }

//     // whether 1 is present or not

//     return 0;
// }






// reverse an array


#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    reverse(arr, arr + n); 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}