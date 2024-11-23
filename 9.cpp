// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     char ch[5]={'a', 'b', 'c', 'd', 'e'};
//     cout<<ch[5]<<endl;

//     cout<<" printing the array"<<endl;

//     for(int i=0; i<5; i++ ){
//         cout<<ch[i]<<" ";
//     }

//     cout<< " printing done"<<endl;

//     // double firstdouble [5];
//     // float firstfloat [6];
//     // bool firstbool[9];

//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n){

    int max = INT_MIN;

    for(int i = 0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){

    int size;
    cin >> size;

    int num[100];

    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout<<"maximum value is "<<getMax(num,size) << endl;
    // cout<<"minimum value is"<<getMin(num,size) << endl;

    return 0;
}