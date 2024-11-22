#include<bits/stdc++.h>
using namespace std;

// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep;


typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep ;

union money 
{
    int rice;
    char car;
    float pounds;
};

// int main(){

//     // ep harry;  // struct employee harry;
//     struct employee harry;
//     harry.eId = 1;
//     harry.favChar = 'c';
//     harry.salary = 1200000;

//     cout<<"the value is: "<<harry.eI<<endl;
//     cout<<"the value is: "<<harry.favChar<<endl;
//     cout<<"the value is: "<<harry.salary<<endl;

//     return 0;
// }

int main(){
    // ep harry ; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;

    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1<<endl;
    
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl; 
}